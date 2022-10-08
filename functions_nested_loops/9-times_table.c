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
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			result = num;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
