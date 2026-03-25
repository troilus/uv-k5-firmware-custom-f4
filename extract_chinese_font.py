#!/usr/bin/env python3
"""
Extract Chinese font data for only the characters used in the menu.
"""

# Encodings used in chinese.h (from our analysis)
used_encodings = [
    0x01, 0x02, 0x03,  # 步进、频差
    0x06, 0x07, 0x08,  # 收、DCS、CTCS
    0x0B, 0x0C, 0x0D,  # 音、模
    0x0E,              # 发
    0x10, 0x11, 0x12,  # 频差方向
    0x16,              # 忙
    0x17,              # 禁
    0x1A, 0x1B,        # 存
    0x1C, 0x1D,        # 信道
    0x1E, 0x1F,        # 删除
    0x7F, 0x80,        # 名称
    0x89,              # 式
    0x8C,              # 省
    0x8D,              # 电
    0x8E, 0x8F,        # 带宽
    0x93, 0x94,        # 显示
    0x95, 0x96,        # 背光
    0x97, 0x98,        # 亮度
    0x9B,              # 尾
    0x9C,              # 音
    0x9D,              # 消
    0x9E, 0x9F, 0xA0,  # 中继
    0xA1, 0xA2,        # 快捷
    0xA4,              # 长
    0xA9,              # 按
    0xB3,              # 静
    0xB4,              # 噪
    0xB5,              # 信
    0xB6,              # 息
    0xB7,              # 功
    0xB9,              # 频
    0xBA,              # 量
    0xBD,              # 亮
    0xBE,              # 对
    0xC1,              # 功
    0xC3,              # 开
    0xC4,              # 机
    0xC7,              # 反
    0xC9,              # 双
    0xD0,              # 守
    0xDA,              # 电（高）
]

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

# Calculate font indices for each encoding
font_indices = []
for encoding in used_encodings:
    idx = is_chn(encoding)
    if idx != 255:
        font_indices.append((encoding, idx))
        print(f"Encoding 0x{encoding:02X} ({encoding:3d}) -> Font Index {idx:3d}")

print(f"\nTotal unique characters: {len(font_indices)}")
print(f"Expected font data size: {len(font_indices) * 22} bytes")

# Generate the font extraction code
print("\n" + "="*60)
print("Font data extraction positions:")
print("="*60)

for encoding, idx in font_indices:
    # Each character is 22 bytes = 11*12 bits = 264 bits = 33 bytes
    # But the encoding uses bit packing
    byte_offset = (11 * 12 * idx) // 8
    bit_offset = (11 * 12 * idx) % 8
    print(f"Index {idx:3d}: byte_offset={byte_offset:4d}, bit_offset={bit_offset}")