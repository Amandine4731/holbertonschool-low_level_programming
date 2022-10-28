#include "main.h"
/**
 * _calloc - to allocate memory for an array, using malloc
 * @nmemb: a variable int
 * @size: a variable int
 * Return: to the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i != nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
