#include "main.h"
/**
 * str_concat - to concatenate two strings
 * @s1: a pointer
 * @s2: an other pointer
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, m;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	for (m = 0; m < strlen(s2); m++)
	{
		s[i + m] = s2[m];
	}
	s[i + m] = '\0';
	return (s);
}
