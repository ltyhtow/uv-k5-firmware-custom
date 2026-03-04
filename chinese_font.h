#ifndef CHINESE_FONT_H
#define CHINESE_FONT_H

#ifdef ENABLE_CHINESE

#include <stdint.h>

#define CHINESE_FONT_CHAR_COUNT  184
#define CHINESE_FONT_CHAR_WIDTH  15
#define CHINESE_FONT_CHAR_BYTES  30

// Lookup a Chinese character bitmap by GBK code
// Returns pointer to 30-byte bitmap data (15 bytes row0 + 15 bytes row1), or NULL if not found
const uint8_t *CHINESE_GetGlyph(uint16_t gbk_code);

// Check if a byte is the first byte of a GBK Chinese character
#define IS_GBK_FIRST_BYTE(b) ((uint8_t)(b) >= 0xB0 && (uint8_t)(b) <= 0xF7)

#endif // ENABLE_CHINESE

#endif // CHINESE_FONT_H
