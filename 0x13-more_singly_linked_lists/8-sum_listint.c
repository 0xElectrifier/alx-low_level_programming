#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data (n) of a
 * listint_t linked list
 * @head: pointer to head of list
 *
 * Return: the sum of all data in list and '0' if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
