#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list
 * @h: Pointer to 'head' of list to be printed
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
