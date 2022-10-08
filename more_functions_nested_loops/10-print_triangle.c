#include "main.h"
/**
 * print_triangle - print square in a triangle form
 * @size: the size of the square
 */
void print_triangle(int size)
{
	int r; /* nombre of loop turns */
	int i;
	char t = '#';
	char e = ' ';

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < size; i--)
	{
		for (r = 0; r < size; r++)
		{
			e = r;
			if (size > 0)
			{
				_putchar(e);
				_putchar(t);
			}
		}
		_putchar('\n');
	}
}
