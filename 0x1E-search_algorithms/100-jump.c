#include "search_algos.h"

/**
 * min - calculates the minimum value between two arguments
 * @step: first argument
 * @size: second argument
 *
 * Return: the minimum value amongst the two argument
 */
size_t min(int step, int size)
{
	if (step < size)
		return (step);
	else
		return (size);
}

/**
 * jump_search - searches for a value in a sorted array of integers, using
 *		 the `Jump search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located otherwise, -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL)
		return (-1);

	prev = 0;
	step = sqrt(size);

	printf("Value checked array[%ld] = [%d]\n",
		       prev,
		       array[prev]);

	/* Find the block where @value might belong
	index = min(step, size) - 1;
	while (array[index] < value)
	{
		if (step >= size)
			break;

		prev = step;
		step += sqrt(size);
		index = min(step, size) -1;
		printf("Value checked array[%ld] = [%d]\n",
		       prev,
		       array[prev]);

		if (prev >= size)
			return (-1);
	}
	*/
	while (step < size && array[step] < value)
	{
		prev = step;
		step += sqrt(size);

		printf("Value checked array[%ld] = [%d]\n",
		       prev,
		       array[prev]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while ((array[prev] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	if (array[prev] != value)
		return (-1);

	return (prev);
}
