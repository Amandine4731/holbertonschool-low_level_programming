#include "main.h"
/**
 * array_range - to create an array of integers
 * @min: a variable
 * @max: a variable
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
