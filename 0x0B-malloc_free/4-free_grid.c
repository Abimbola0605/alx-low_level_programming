#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees thr memory allocation
 * created by your alloc_grid
 * @height: height of grid
 * @grid: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
