#include "main.h"

/**
 * is_positive - checks of the arguments are positive
 * @width: first parameter
 * @height: second parameter
 *
 * Return: 0 if false otherwise, 1
 */
int is_positive(int width, int height)
{
	return (width * height == 0 || width < 0 || height < 0);
}

/**
 * free_grid - frees a 2D array if malloc fails
 * @array: array to be freed
 * @
 * Return: array
 */
int **free_array(int **array, int row)
{
	int x;

	if (array == NULL)
		return (NULL);
	for (x = row - 1; x >= 0; x--)
	{
		if (array[row])
			free(array[row]);
	}

	free(array);

	return (array);
}
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

	if (is_positive(width, height))
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(width * sizeof(int));
		if (array[row] == NULL)
		{
			free_array(array, row);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
