#include "main.h"
/**
  * print_to_98 - print numbers to 98
  * @n: to check values
  */
void print_to_98(int n)
{
int i;

for (i = 0; i < 10; i++)
{
for (n = 0; n < 99; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
