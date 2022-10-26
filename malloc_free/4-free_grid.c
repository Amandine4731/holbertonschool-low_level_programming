#include "main.h"
/**
 * free_grid - to free a 2 dimensional grid (alloc_grid)
 * @width: a pointer to a pointer
 * @height: variable
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		for (; i >= 0; i--)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
		free(grid);
		grid = NULL;
	}

}
