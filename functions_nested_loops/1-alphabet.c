#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * Description: print the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
/**
 * print_alphabet - Entry point
 * prototype for the function
 */
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
