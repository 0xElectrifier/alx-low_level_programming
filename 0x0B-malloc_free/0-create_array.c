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
	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
