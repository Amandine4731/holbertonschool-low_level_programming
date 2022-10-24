#include "main.h"
/**
 * _strdup - to return a pointer to a newly allocated space in memory
 * @str: a pointer char
 * Return: p
 */
char *_strdup(char *str)
{
	unsigned int size;
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
