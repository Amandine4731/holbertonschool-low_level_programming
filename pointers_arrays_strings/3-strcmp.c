#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: a string
 * @s2: an other string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		return (0);
	}
}
