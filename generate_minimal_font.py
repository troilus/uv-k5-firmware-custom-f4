#!/usr/bin/env python3
"""
Generate minimal Chinese font array from losehu's font data.
"""

import re
import os

# Encodings used in chinese.h
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
    print("ERROR: Could not find gFontChinese_out array in losehu/font.c")
    exit(1)

font_data_str = match.group(1)
# Parse hex values
font_bytes = []
hex_values = re.findall(r'0X[0-9A-Fa-f]+', font_data_str)
for val in hex_values:
    font_bytes.append(int(val, 16))

print(f"Extracted {len(font_bytes)} bytes from losehu font array")

# Generate minimal font data (keep original encoding positions)
# We'll keep the full 2261 byte structure but only include our characters
minimal_font = [0] * 2261

for encoding in used_encodings:
    idx = is_chn(encoding)
    if idx != 255:
        # Calculate byte offset
        byte_offset = (11 * 12 * idx) // 8
        bit_offset = (11 * 12 * idx) % 8

        # Copy 33 bytes (for 22-byte character with bit alignment)
        for i in range(33):
            if byte_offset + i < len(font_bytes):
                minimal_font[byte_offset + i] = font_bytes[byte_offset + i]

# Count non-zero bytes to see actual usage
non_zero = sum(1 for b in minimal_font if b != 0)
print(f"Non-zero bytes in minimal font: {non_zero}")
print(f"Estimated space savings: {2261 - non_zero} bytes")

# Generate C code
print("\n" + "="*70)
print("GENERATED C CODE:")
print("="*70)

print(f"const uint8_t gFontChinese_out[2261] = {{")
# Print in hex format, 12 bytes per line
for i in range(0, len(minimal_font), 12):
    line_bytes = minimal_font[i:i+12]
    hex_str = ", ".join(f"0X{b:02X}" for b in line_bytes)
    if i + 12 < len(minimal_font):
        print(f"\t{hex_str},")
    else:
        print(f"\t{hex_str}")
print("};")

print("\n" + "="*70)
print(f"Total characters: {len(used_encodings)}")
print(f"Font data size: 2261 bytes (unchanged structure)")
print(f"Active bytes: {non_zero}")
print(f"Space saved by zeroing unused characters: {2261 - non_zero} bytes")
print("="*70)
