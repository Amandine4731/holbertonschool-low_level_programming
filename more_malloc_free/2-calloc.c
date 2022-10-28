#include "main.h"
/**
 * _calloc - to allocate memory for an array, using malloc
 * @nmemb: a variable int
 * @size: a variable int
 * Return: to the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i != nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	free(ptr);
	return (ptr);
}
