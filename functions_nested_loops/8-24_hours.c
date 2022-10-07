#include "main.h"
/**
 * jack_bauer - print the last digit
 * return: Always 0.
 **/
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
if (h <= 9)
{
_putchar('0');
_putchar(h % 10 + '0');
_putchar(':');
}
else
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
}
if (m <= 9)
{
_putchar('0');
_putchar(m % 10 + '0');
}
else
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
}
