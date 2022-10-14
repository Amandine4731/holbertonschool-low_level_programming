#include "main.h"
/**
 * _memcpy - copie memory area
 * @dest: the destination
 * @src: the source
 * @n: This is the number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; dest[i] != '\0'; i++)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];

		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
