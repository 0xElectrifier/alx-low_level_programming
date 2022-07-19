#include "main.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
