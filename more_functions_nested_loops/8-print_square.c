#include "main.h"
/**
  * print_square - print a square
  * @size: the size of the square
  */
void print_square(int size)
{
int r; /* nombre of loop turns */
char t = '#';

for (size = 0; size < 10; r++)
{
for (r = 0; r < size; r++)
{
if (size <= 0)
{
}
else
{
_putchar(t);
}
}
_putchar('\n');
}
}
