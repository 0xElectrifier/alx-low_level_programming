#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: Pointer to head of list
 * @index: the index of the node to be returned starting at 0
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (node_count < index && head != NULL)
	{
		head = head->next;
		node_count++;
	}
	return (head);
}
