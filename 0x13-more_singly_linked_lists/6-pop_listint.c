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
	int temp_int;

	temp = *head;
	temp_int = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (temp_int);
}
