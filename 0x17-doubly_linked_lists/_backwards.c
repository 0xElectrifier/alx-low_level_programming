#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of list
 *
 * Return: the number of nodes
 */
size_t print_backward(const dlistint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		print_backward(h->next);
		printf("%d\n", h->n);
		count++;

	}
/*	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
*/
	return (count);
}
