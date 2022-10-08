#include "main.h"
/**
 * print_square - print a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int r; /* nombre of loop turns */
	int i;
	char t = '#';

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (r = 0; r < size; r++)
		{
			if (size > 0)
			{
				_putchar(t);
			}
		}
		_putchar('\n');
	}
}
