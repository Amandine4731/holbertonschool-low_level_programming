#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: Always 0.
*/
void times_table(void)
{
int num = 0;
int n = 0;
int result = 0;

for (num = 0; num <= 9; num++)
{
for (n = 0; n <= 9; n++)
{
_putchar(num + '0');
_putchar('\n');
_putchar(n + '0');
_putchar(',');
_putchar(' ');
_putchar((num * n) + '0');
if (result < 10)
{ 
_putchar(' ');
}
else
{
_putchar((result / 10) + '0');
}
_putchar('\n');
}
}
}
