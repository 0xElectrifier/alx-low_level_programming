#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer of pointer to head of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *temp;

	rev = NULL;
	while (*head != NULL)
	{
		temp = *head;
		temp->next = rev;
		rev = temp;
		*head = (*head)->next;
	}
	*head = rev;

	return (*head);
}
