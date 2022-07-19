#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer to head of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *copy;

	copy = *head;
	while (copy != NULL)
	{
		temp = copy;
		copy = copy->next;
		free(temp);
	}
	*head = NULL;
}
