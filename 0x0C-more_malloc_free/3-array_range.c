#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: smallest and first integer in the array
 * @max: biggerst and last integer in the array
 *
 * Return: pointer to the int array
 */
int *array_range(int min, int max)
{
	int *numbers, range, value, i;

	if (min > max)
		return (NULL);

	range = max - (min - 1);
	value = min;

	numbers = malloc(range * sizeof(int));
	if (numbers == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		numbers[i] = value++;
	}	

	return (numbers);
}
