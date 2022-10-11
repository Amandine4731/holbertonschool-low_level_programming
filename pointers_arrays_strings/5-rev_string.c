#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the character to check
 */
void rev_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
