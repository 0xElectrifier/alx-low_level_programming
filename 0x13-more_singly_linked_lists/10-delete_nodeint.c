#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at specified index
 * in a listint_t linked list
 * @head: pointer to pointer to head of list
 * @index: index where node will be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node_count = 0;
	listint_t *temp, *copy;

	copy = *head;

	while (node_count < (index - 1) && copy != NULL && index != 0)
	{
		copy = copy->next;
		node_count++;
	}
	if (copy == NULL)
		return (-1);

	temp = copy->next;
	copy->next = (copy->next)->next;

	free(temp);
	return (1);
}
