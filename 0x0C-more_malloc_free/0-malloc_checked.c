#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable to be allocated memory
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = &b;

	c = malloc(sizeof(unsigned int));
	if (c == NULL)
		return (NULL);
}

