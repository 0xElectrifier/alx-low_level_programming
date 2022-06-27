#include "main.h"

/**
 * create_array - function that creates an array of chars and initializes it
 * with a specific char
 * @size: amount of integer in array
 * @c: initialize c to variable
 *
 * Return: pointer to;
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;
	array = malloc(size * sizeof(int) + 1);

	if (array == NULL)
		return ('\0');
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
