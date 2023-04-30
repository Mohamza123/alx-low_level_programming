#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees the grid
 * @grid: the grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
