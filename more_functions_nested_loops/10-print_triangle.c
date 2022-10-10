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
	else
	{
	for (i = 0; i < size; i++)
	{
		for (r = 0; r < (size - i); r++)
		{
			if (r < (size - i))
			{
				_putchar(e);
			}
			else
			{
				_putchar(t);
			}
		}
		_putchar('\n');
	}
	}
}
