#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the 'head'/first element of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
