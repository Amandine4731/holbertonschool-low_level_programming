#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: a pointer char
 * @b: a variable char
 * @n: a variable int
 * Return: to the destination
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
