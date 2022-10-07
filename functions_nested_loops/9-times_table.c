#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: Always 0.*
*/
void times_table(void)
{
int num = '0';

for (num = '0'; num <= '9'; num++)
{
_putchar(num);
if (num != '9')
{
_putchar(',');
_putchar(' ');
}
}
putchar('\n');
return (0);
}
}
