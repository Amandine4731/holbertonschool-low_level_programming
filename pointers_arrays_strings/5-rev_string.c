#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the character to check
 */
void rev_string(char *s)
{
	int i = 0; /* index */
	
	_putchar(s[i]);
	while (s[i] != '\0') /* count the number of characters in your string */
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
