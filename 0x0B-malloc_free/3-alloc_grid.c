#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array, row, i, j;

	if (width * height == 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	for (row = 0; row < height; row++)
		array[row] = malloc(width * sizeof(int));


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
