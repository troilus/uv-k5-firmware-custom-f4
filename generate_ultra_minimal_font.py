#!/usr/bin/env python3
"""
Generate ultra-minimal Chinese font array with completely new structure.
Only 60 characters, each 22 bytes = 1320 bytes total.
"""

import re
import os

# Create encoding to index mapping
used_encodings = [0x01, 0x02, 0x03, 0x06, 0x07, 0x08, 0x0B, 0x0C, 0x0D, 0x0E,
                 0x10, 0x11, 0x12, 0x16, 0x17, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E,
                 0x1F, 0x7F, 0x80, 0x89, 0x8C, 0x8D, 0x8E, 0x8F, 0x93, 0x94,
                 0x95, 0x96, 0x97, 0x98, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0,
                 0xA1, 0xA2, 0xA4, 0xA9, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB9,
                 0xBA, 0xBD, 0xBE, 0xC1, 0xC3, 0xC4, 0xC7, 0xC9, 0xD0, 0xDA]

def is_chn(num):
    """Convert encoding to font index (from losehu's code)"""
    if num >= 1 and num < 10:
        return num - 1
    elif num > 10 and num < 32:
        return num - 2
    elif num > 126 and num <= 233:
        return num - 97
    else:
        return 255

# Read losehu font.c file
losehu_font_path = os.path.join(os.path.dirname(__file__), 'losehu', 'font.c')
with open(losehu_font_path, 'r', encoding='utf-8', errors='ignore') as f:
    content = f.read()

# Extract gFontChinese_out array
pattern = r'const uint8_t gFontChinese_out\[2261\]\s*=\s*\{([^}]+)\}'
match = re.search(pattern, content, re.DOTALL)
if not match:
    print("ERROR: Could not find gFontChinese_out array")
    exit(1)

font_data_str = match.group(1)
font_bytes = []
hex_values = re.findall(r'0X[0-9A-Fa-f]+', font_data_str)
for val in hex_values:
    font_bytes.append(int(val, 16))

print(f"Extracted {len(font_bytes)} bytes from losehu font array")

# Build encoding -> index map for our new array
encoding_to_index = {}
for i, enc in enumerate(used_encodings):
    encoding_to_index[enc] = i
    print(f"Encoding 0x{enc:02X} -> New Index {i}")

# Extract font data for each encoding
minimal_font = []
for enc in used_encodings:
    old_idx = is_chn(enc)
    byte_offset = (11 * 12 * old_idx) // 8
    bit_offset = (11 * 12 * old_idx) % 8

    # Extract 33 bytes (for bit alignment)
    char_data = []
    for i in range(33):
        if byte_offset + i < len(font_bytes):
            char_data.append(font_bytes[byte_offset + i])

    minimal_font.extend(char_data)

# Generate new encoding map and font data
print("\n" + "="*70)
print("ENCODING MAPPING TABLE:")
print("="*70)
print("static const uint8_t gFontEncodingMap[] = {")
for enc in used_encodings:
    print(f"\t0x{enc:02X},  // {encoding_to_index[enc]}")
print("};")

print("\n" + "="*70)
print("ULTRA-MINIMAL FONT DATA (1320 bytes):")
print("="*70)
print(f"const uint8_t gFontChinese_out[{len(minimal_font)}] = {{")
# Print in hex format, 16 bytes per line
for i in range(0, len(minimal_font), 16):
    line_bytes = minimal_font[i:i+16]
    hex_str = ", ".join(f"0X{b:02X}" for b in line_bytes)
    if i + 16 < len(minimal_font):
        print(f"\t{hex_str},")
    else:
        print(f"\t{hex_str}")
print("};")

print("\n" + "="*70)
print("STATISTICS:")
print("="*70)
print(f"Total characters: {len(used_encodings)}")
print(f"Font data size: {len(minimal_font)} bytes (was 2261 bytes)")
print(f"Space saved: {2261 - len(minimal_font)} bytes ({(2261 - len(minimal_font))/2261*100:.1f}%)")
print("="*70)

# Generate C helper function
print("\n" + "="*70)
print("HELPER FUNCTION TO FIND FONT INDEX:")
print("="*70)
print("""
// Find font index for given encoding
static uint8_t get_font_index(uint8_t encoding) {
    static const uint8_t encoding_map[] = {
""")
for enc in used_encodings:
    print(f"        0x{enc:02X},")
print("""    };
    static const uint8_t num_chars = sizeof(encoding_map);

    for (uint8_t i = 0; i < num_chars; i++) {
        if (encoding_map[i] == encoding) {
            return i;
        }
    }
    return 255;  // Not found
}
""")