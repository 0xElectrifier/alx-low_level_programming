#include "lists.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Takes pointer s of type char as parameter
 *
 * Return: 0 always
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] && (s[i] != '\0'))
	{
		i++;
	}
	return (i);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer of pointers that points to list_t* which is a pointer
 * @str: string to be added to the list
 *
 * Return: the address of the new element, of NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;


	return (*head);
}
