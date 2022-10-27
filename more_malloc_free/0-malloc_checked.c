#include "main.h"
/**
 * malloc_checked - to allocate memory using malloc
 * @b: a variable
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
