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
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to a newly created string in memory
 */
char *_strdup(const char *str)
{
	int i, len;
	char *s;

	len = _strlen(str);

	s = malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer of pointer to a node
 * @str: str to be appended
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_e(list_t *head, const char *str)
{
	list_t *new, *copy;

	copy = head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (head == NULL)
		head = new;
	else
	{
		while (copy->next != NULL)
		{
			copy = copy->next;
		}

		copy->next = new;
	}

	return (head);
}
