#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 *                 the `Binary Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where @value is located otherwise, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int R, L, m, i;

	L = 0;
	R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		m = (R + L) / 2;
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i != R)
				printf(", ");
		}
		printf("\n");

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}

	return (-1);
}
