#include "main.h"
/**
 * puts2 - every other character of a string, starting with the first character
 * @str: the pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	else
	{

	}
	i++;
	}
	_putchar('\n');
}
