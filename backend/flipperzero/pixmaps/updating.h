#pragma once

#define updating_width 128
#define updating_height 64

static unsigned char updating_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x50, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x98, 0x01, 0x18, 0xC0, 0x0C, 0x00, 0x00, 0x00, 0x48, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x98, 0x01, 0x18, 0xC0, 0x00, 0x00, 0x00, 0x00, 
  0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x98, 0x35, 0x9E, 0xE3, 
  0xAD, 0xB1, 0x00, 0x00, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x98, 0x6D, 0x5B, 0xC6, 0x6C, 0xDB, 0x00, 0x00, 0x28, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x98, 0x6D, 0x9B, 0xC7, 0x6C, 0xDB, 0x00, 0x00, 
  0x48, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x98, 0x6D, 0xDB, 0xC6, 
  0x6C, 0xDB, 0x00, 0x00, 0x50, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x8F, 
  0x98, 0x6D, 0xDB, 0xC6, 0x6C, 0xDB, 0x00, 0x00, 0x50, 0x10, 0x0B, 0x95, 
  0xFF, 0xFF, 0x0F, 0x8E, 0xF0, 0x3C, 0x9E, 0x8D, 0x6D, 0xF3, 0x24, 0x01, 
  0x50, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x8C, 0x00, 0x0C, 0x00, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0x48, 0x10, 0x4B, 0xF2, 0xFF, 0xFF, 0x3F, 0x8C, 
  0x00, 0x0C, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x28, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x24, 0x10, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x13, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0B, 0x10, 0x13, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x07, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0x07, 0x10, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0xFE, 0x03, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x60, 0x00, 0x38, 0x00, 0xFB, 
  0x01, 0x10, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x18, 
  0x00, 0xC0, 0x80, 0xF1, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xF3, 0xE0, 0x00, 0x10, 0x8B, 0xF4, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x0C, 0x41, 
  0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x00, 0x18, 0x62, 0x00, 0x10, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x30, 0x34, 0x00, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x60, 0x18, 
  0x00, 0x10, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x10, 0x00, 
  0x00, 0x00, 0xC0, 0x08, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x09, 0x00, 0x10, 0x4B, 0x8A, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x09, 
  0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x04, 0x00, 
  0x01, 0x00, 0x00, 0x07, 0x00, 0x10, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x04, 0xC0, 0xC0, 0x07, 0x00, 0x02, 0x00, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x02, 0x00, 0xF0, 0x1F, 0x00, 0x00, 
  0x00, 0x10, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x02, 0x00, 
  0xF8, 0x3F, 0x00, 0x04, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0x00, 0x00, 0x01, 0x00, 0xFC, 0x59, 0x00, 0x04, 0x00, 0x10, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x01, 0x00, 0xF4, 0x49, 0x00, 0x08, 
  0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x01, 0x00, 
  0xC2, 0x83, 0x00, 0x08, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x00, 0x80, 0x00, 0x00, 0x02, 0x80, 0x00, 0x08, 0x00, 0x10, 0x07, 0x00, 
  0x00, 0x00, 0x40, 0x8E, 0x80, 0x8F, 0x00, 0x00, 0x02, 0x80, 0x00, 0x10, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0xF0, 0x00, 0x00, 
  0x02, 0x80, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x10, 0x80, 0x01, 0x00, 0x02, 0x80, 0x00, 0x10, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x06, 0x00, 0x04, 0x40, 0x00, 0x10, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00, 0x18, 0x00, 
  0xE4, 0x43, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x9F, 
  0x04, 0x00, 0x60, 0x00, 0x18, 0x2C, 0x00, 0x20, 0x00, 0x10, 0xF0, 0x03, 
  0x40, 0x00, 0x00, 0x90, 0xF4, 0x00, 0x00, 0x00, 0x04, 0x10, 0x00, 0x20, 
  0x00, 0x90, 0xFF, 0x7F, 0x40, 0xFF, 0xFF, 0x97, 0x0C, 0x03, 0x00, 0x0E, 
  0x02, 0x20, 0x00, 0x20, 0x00, 0x10, 0xF0, 0x03, 0x40, 0x00, 0x00, 0x90, 
  0x0C, 0x0C, 0x80, 0x11, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x70, 
  0xC0, 0xFF, 0xFF, 0x9F, 0x0C, 0x30, 0x40, 0x20, 0x00, 0x00, 0x00, 0x20, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0xC0, 0x20, 0x20, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x08, 0x00, 0x13, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x10, 0x00, 0x1C, 0x22, 0x00, 0x00, 0x00, 0x20, 
  0x00, 0xD0, 0x7C, 0xFB, 0xDF, 0xEF, 0xEA, 0xB6, 0x20, 0x00, 0x30, 0x11, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 
  0x40, 0x00, 0xC0, 0x09, 0x0F, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0xFE, 0x10, 0x00, 0x00, 0x20, 
  0x00, 0x50, 0x7C, 0xF3, 0x3F, 0xFC, 0xF9, 0xA3, 0x00, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x50, 0x7C, 0x10, 0x20, 0x1C, 0x39, 0xA2, 
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x6C, 0xD3, 
  0x2C, 0xFC, 0xF9, 0xA3, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  0x00, 0x50, 0x6C, 0xE0, 0x1F, 0x00, 0x00, 0x80, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x6C, 0xC0, 0x0C, 0x00, 0x00, 0xA0, 
  0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x50, 0x28, 0xC0, 
  0x0C, 0xCC, 0x98, 0x81, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0x00, 0x50, 0x28, 0xC0, 0x0C, 0x54, 0xA9, 0xA2, 0x00, 0xC0, 0xFF, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x50, 0x28, 0xF0, 0x3F, 0xDC, 0xB9, 0xA3, 
  0x00, 0xC0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x50, 0x28, 0xD0, 
  0x2C, 0x00, 0x00, 0xA0, 0x00, 0xA0, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x10, 
  0x00, 0x50, 0x28, 0xD0, 0x2C, 0x00, 0x00, 0xA0, 0x00, 0x20, 0xFC, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x28, 0xE0, 0x1F, 0xFC, 0xFF, 0xA3, 
  0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x50, 0x28, 0xC0, 
  0x0C, 0xFC, 0xFF, 0x83, };
