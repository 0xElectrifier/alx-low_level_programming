#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer of pointer to head of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	int i = 1;
	listint_t *rev, *temp;

	rev = NULL;
	while (*head != NULL)
	{
		temp = *head;
		temp->next = rev;
		rev = temp;
		*head = (*head)->next;
		printf("%d\n", i++);
	}
	*head = rev;

	return (*head);
}
