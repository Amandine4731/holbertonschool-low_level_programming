#include "main.h"
/**
 * _strncpy - copy strings pointed
 * @dest: the receiver
 * @src: the giver
 * @n: a variable
 * Return: to the receiver
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
