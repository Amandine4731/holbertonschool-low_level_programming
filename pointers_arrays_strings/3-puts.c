#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: the character to check
 * Return: count the length of a string
 */
void _puts(char *str)
{
	char *str[];
	int i = 0;

	while (*str[i] != '\0')
	{
	putchar(*str[i]);
	i++;
	}
	_putchar('\n')
	return (0);
}
