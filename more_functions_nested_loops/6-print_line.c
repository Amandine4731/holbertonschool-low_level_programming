#include "main.h"
/**
  * print_line - print a straight line
  * @n: to check
  * Return:
  */
void print_line(int n)
{
int r;
char t = '_';

for (r = 0; r <= n; r++)
{
if (r <= 0)
{
_putchar('\n');
}
else
{
_putchar(t);
_putchar('\n');
}
}
}
