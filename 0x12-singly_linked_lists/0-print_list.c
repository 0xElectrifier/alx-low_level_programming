#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the 'head'/first element of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}
	return (node_count);
}
