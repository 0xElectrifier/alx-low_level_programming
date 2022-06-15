#include "main.h"
#include <stdio.h>

/**
 * print_array - print array upto n elements
 * @a: array to be read from
 * @n: number of elements to be read
 * Description: prints arrays of upto n elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
