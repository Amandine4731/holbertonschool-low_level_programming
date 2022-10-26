#include "main.h"
/**
 * free_grid - to free a 2 dimensional grid (alloc_grid)
 * @grid: a pointer to a pointer
 * @height: variable
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
