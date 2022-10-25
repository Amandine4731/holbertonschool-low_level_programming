#include "main.h"
/**
 * alloc_grid - to return a pointer to a 2 dimensional array of integers
 * @width: a variable int
 * @height: a variable int
 * Return: if width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **p = 0;
	int i = 0;
	int m = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * width);
	if (p == NULL && p[i] == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
		{
			for (m = 0; m < height; m++)
			{
				p[i][m] = 0;
			}
		}
	}
	return (p);
}
