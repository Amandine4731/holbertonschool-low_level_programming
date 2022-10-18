#include "main.h"
/**
 * _strncpy - copy strings pointed
 * @dest: the receiver
 * @src: the giver
 * @n: a variable
 * Return: to the receiver
 */
char *_strncpy(char *dest, char *src, int n)
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
