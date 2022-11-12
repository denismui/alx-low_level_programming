#include "main.h"
/**
 * free_grid - allocates a grid, makes space and frees the grid
 * @grid: width of the grid
 * @height: height of the grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
