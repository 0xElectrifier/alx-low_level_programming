#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data of a dlistint_t linked list
 * @head: pointer to head of list
 *
 * Return: sum of all ->n in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
