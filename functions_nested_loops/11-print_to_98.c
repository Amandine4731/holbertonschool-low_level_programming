#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: to check values
 */
void print_to_98(int n)
{

	for (; n < 99; n++)
	{
		if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n < 0)
		{
			_putchar(-n);
		}
		else
		{
			_putchar(n);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
}

