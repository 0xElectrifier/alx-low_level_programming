#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head of list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_int;

	if ((head != NULL) && (*head != NULL))
	{
		temp = *head;
		head_int = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (head_int);
}
