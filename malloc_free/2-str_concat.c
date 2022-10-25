#include "main.h"
/**
 * str_concat - to concatenate two strings
 * @s1: a pointer
 * @s2: an other pointer
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, m, x, y;
	int size = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (m = 0; s2[m] != '\0'; m++)
	{
	}
	size = i + m;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size - m; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; y < size - i; y++)
	{
		s[x + y] = s2[y];
	}
	s[x + y] = '\0';
	return (s);
}
