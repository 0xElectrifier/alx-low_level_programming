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
	dlistint_t *head, *new, *temp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	head = *h;
	while (head != NULL && i < (idx - 1))
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	else
	{
		temp = head->next;
		head->next = NULL;
		new = add_dnodeint_end(&head, n);
		new->next = temp;
	}

	return (new);
}
