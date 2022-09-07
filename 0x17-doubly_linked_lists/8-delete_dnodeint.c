#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 *				linked list
 * @head: pointer to pointer to head of list
 * @index: position of item in list to be deleted
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *h = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	while (h != NULL && i < index)
	{
		h = h->next;
		i++;
	}
	if (h == NULL)
		return (-1);

	temp = h;
	if (index == 0)
		*head = (temp)->next;
	else
		(temp->prev)->next = temp->next;

	if (temp->next != NULL)
		(temp->next)->prev = temp->prev;

	free(temp);

	return (1);
}
