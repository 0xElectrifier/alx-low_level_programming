#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a linked dlistint_t list
 * @h: pointer to head of node
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
