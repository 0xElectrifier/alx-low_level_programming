#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable to be allocated memory
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
