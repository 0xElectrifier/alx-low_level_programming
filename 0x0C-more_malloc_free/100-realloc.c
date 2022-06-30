#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to string to be reallocated
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 *
 * Return: pointer to the reallocated string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
