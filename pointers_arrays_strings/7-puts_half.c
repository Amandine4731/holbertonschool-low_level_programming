#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the pointer
 */
void puts_half(char *str)
{
	int i = 0; /* index */

	while (str[i] != '\0') /* count the number of characters in your string */
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
