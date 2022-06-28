#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: array to be free'd
 * @height: amouunt of rows already allocated memory
 *
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = height; x >= 0; x--)
	{
		free(grid[x]);
		grid[x] = NULL;
	}
	free(grid);
}
