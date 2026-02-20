#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
void print_char_8x12(char c)
{
  c -= 0x20;  /* font offset */

  for (int col = 0; col < 12; col++) {
    unsigned char colBits = font_8x12[(int)c][col];

    for (int row = 0; row < 8; row++) {
      unsigned char mask = 1 << (7 - row);
      putchar((colBits & mask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}


