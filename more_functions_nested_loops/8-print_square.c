#include "main.h"
/**
  * print_square - print a square
  * @size: the size of the square
  */
void print_square(int size)
{
int r; /* nombre of loop turns */
char t = '#';

for (r = 0; r < size; r++)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
_putchar(t);
}
}
_putchar('\n');
}
