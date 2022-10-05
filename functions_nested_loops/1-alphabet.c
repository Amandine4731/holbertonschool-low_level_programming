#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0.
 */
void print_alphabet(void)
/* prototype for the function */
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
