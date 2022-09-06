#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of node
 * @idx: index where new node will be inserted
 * @n: item to be inserted at idx
 *
 * Return: address of new item, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	temp = *h;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
