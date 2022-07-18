#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of pointer to list to be printed
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;
	const listint_t *copy;

	node_count = 0;
	copy = h;

	while (copy != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;

		node_count++;
	}
	return (node_count);
}
