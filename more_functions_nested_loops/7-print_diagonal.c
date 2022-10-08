#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: to check
  */
void print_diagonal(int n)
{
	int r = 0; /* nbr of loop turns */
	char s = '\\';
	char e =  ' ';

	for (r = 0; r < n; r++)
	{
	while (n > 0)
	{
	_putchar(e);
	n++;
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	_putchar(s);
	_putchar('\n');
	}
	}

}
