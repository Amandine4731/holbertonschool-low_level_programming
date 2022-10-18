#include "main.h"
/**
 * _strncat - add and copy strings pointed
 * @dest: the receiver
 * @src: the giver
 * @n: a variable
 * Return: to the receiver
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';
	return (dest);
}
