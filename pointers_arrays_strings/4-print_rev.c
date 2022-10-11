#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the character to check
 */
void print_rev(char *s)
{
	int i = 0; /* index */

	while (s[i] != '\0') /* count the number of characters in your string */
	{
		i++;
	}
	for (; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
