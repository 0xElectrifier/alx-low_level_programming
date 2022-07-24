#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer of pointer to head of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *t_copy;

	if ((*head)->next == NULL)
		return (*head);

	temp = reverse_listint(&(*head)->next);
	t_copy = temp;

	while (t_copy->next != NULL)
		t_copy = t_copy->next;

	(*head)->next = NULL;
	t_copy->next = *head;
	*head = temp;

	return (*head);
}
