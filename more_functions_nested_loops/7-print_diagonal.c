#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: to check
 */
void print_diagonal(int n)
{
	int r = 0; /* nbr of loop turns */
	int l = 0;
	char s = '\\';
	char e =  ' ';

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < n; l++)
	{
		for (r = 0; r < n; r++)
		{
			if (n > 0)
			{
				_putchar(e);
			}

			_putchar(s);
			_putchar('n');
		}
}
}
