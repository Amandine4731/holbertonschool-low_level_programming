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
	int x = 0;
	int n = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		n++;
	}
	p = malloc(sizeof(int) * n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = min, i = 0; x <= max; i++, x++)
	{
		p[i] = x;
	}
	return (p);
}
