#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: grid of memories
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int f = 0;

	for (; f < height; f++)
		free(grid[f]);
	free(grid);
}
