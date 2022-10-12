#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the pointer
 */
void puts_half(char *str)
{
	int n = 0;
	int h = 0;

	while (str[n] != '\0')
	{
		n++;
		h++;
	}

	for (h = h / 2; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
		_putchar('\n');
}
