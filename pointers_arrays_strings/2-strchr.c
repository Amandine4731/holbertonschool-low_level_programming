#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: a pointer
 * @c: a variable
 * Return: (p + i) and 0
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c && *s != NULL)
	{
		s++;
		i++;
	}
	if (*s == c && *s == NULL)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
