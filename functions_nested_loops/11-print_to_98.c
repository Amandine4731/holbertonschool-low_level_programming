#include "main.h"
/**
  * print_to_98 - print numbers to 98
  * @n: to check values
  */
void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i < -9)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
_putchar('\n');
}

