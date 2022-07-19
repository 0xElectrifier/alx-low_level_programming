#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of head (first element in the list)
 * @n: figure to be appended to the list
 *
 * Return: address of the new element, of NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *copy, *new;

	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (copy == NULL)
		*head = new;
	else
	{
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new;
	}
	return (*head);
}
