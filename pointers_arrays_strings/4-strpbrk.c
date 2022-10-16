#include "main.h"
/**
 * _strpbrk - searche a string for any of a set of bytes
 * @s: a pointer compared
 * @accept: a pointer to compare
 * Return:
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		s++;

		for (i = 0; accept[i] != '\0' ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
