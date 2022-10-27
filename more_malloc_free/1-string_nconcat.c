#include "main.h"
/**
 * string_nconcat - to concatenate two strings
 * @s1: a pointer char
 * @s2: a pointer char
 * @n: a variable
 * Return: a new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = 0;
	unsigned int i, m, x, y;
	unsigned int size = 0;

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
	for (m = 0; m < n; m++)
	{
		p[i] = s2[m];
		i++;
	}
	size = i + m;
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size - m; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < size - i; y++)
	{
		p[x + y] = s2[y];
	}
	p[x + y] = '\0';
	return (p);
}
