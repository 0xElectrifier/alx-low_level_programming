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
	char *str;

	if (nmemb == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	return (str);
}
