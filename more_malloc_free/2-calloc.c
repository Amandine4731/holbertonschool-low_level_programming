#include "main.h"
/**
 * _calloc - to allocate memory for an array, using malloc
 * @nmemb: a variable int
 * @size: a variable int
 * Return: to the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	free(ptr);
	return (ptr);
}
