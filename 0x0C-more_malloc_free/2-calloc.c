#include "main.h"

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: sizeof bytes to be used
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int real_size, i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	real_size = nmemb * size;
	str = malloc(real_size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < real_size; i++)
		str[i] = 0;

	return (str);
}
