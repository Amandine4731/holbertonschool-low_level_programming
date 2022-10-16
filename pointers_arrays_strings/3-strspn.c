#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: a pointer
 * @accept: a pointer
 * Return: s or 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
	}
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			return (0);
		}
	}
	return (i);
}
