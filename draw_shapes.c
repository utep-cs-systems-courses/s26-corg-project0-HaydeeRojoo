#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
// Prints an arrow.
void print_arrow(void)
{
  static const unsigned char arrow_r[7] = {0x08,0x0C,0x7E,0x7F,0x7E,0x0C,0x08,
  };

  for (int row = 0; row < 7; row++) {
    unsigned char bits = arrow_r[row];
    for (int col = 0; col < 7; col++) {
      unsigned char mask = 1 << (6 - col);
      putchar((bits & mask) ? '*' : ' ');
  
    }
    putchar('\n');
  }  putchar('\n');
}


