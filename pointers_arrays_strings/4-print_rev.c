#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the character to check
 */
void print_rev(char *s)
{
	int i = 0;
	int end = *s[i] != 0;

	for (i = 0; i = end; i--) 
	{
	while (*s[i] != 0)
	{
	_putchar(*s[i]);
	i++;
	}
	_putchar('\n');
}
}
