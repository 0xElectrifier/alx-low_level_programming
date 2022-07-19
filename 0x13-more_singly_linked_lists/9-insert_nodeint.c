#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: pointer to pointer of head of list
 * @idx: index of the list where the new node should be added
 * @n: figure to be inserted at idx
 *
 * Return: address to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_count = 0;
	listint_t *copy, *new;

	copy = *head;
	while (idx != 0 && node_count < (idx - 1) && (copy != NULL))
	{
		if (copy == NULL)
			return (NULL);

		copy = copy->next;
		node_count++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = copy->next;
		copy->next = new;
	}

	return (new);
}
