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
	unsigned int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[x] == accept[i])
			{
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
	}
	return (x);
}
