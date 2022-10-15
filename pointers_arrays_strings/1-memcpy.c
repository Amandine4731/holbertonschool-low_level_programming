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

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];

		}
	return (dest);
}
