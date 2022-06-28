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
 * free_array - frees a 2D array at row if malloc fails
 * @array: array to be freed
 * @row: the last row where it value was NULL
 *
 * Return: array
 */
int **free_array(int **array, int row)
{
	int x;

	for (x = row - 1; x >= 0; x--)
	{
		if (array[x])
		{
			free(array[x]);
			array[x] = NULL;
		}
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
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
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
