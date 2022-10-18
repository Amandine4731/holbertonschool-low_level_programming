#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: pointer s
 * Return: count the length of a string
 */
int _strlen(char *s)
{
	unsigned int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	return (c);
}
