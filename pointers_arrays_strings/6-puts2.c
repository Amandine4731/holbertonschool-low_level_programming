#include "main.h"
/**
 * puts2 - every other character of a string, starting with the first character
 * @str: the pointer
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i <= str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
