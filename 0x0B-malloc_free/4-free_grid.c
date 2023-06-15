#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL || height == 0)
		return;

	for (c = 0; c < height; c++)
		free(grid[c]);

	free(grid);
}
