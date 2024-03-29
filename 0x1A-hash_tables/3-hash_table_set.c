#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if successful otherwise, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index, table_size;

	if (key == NULL || ht == NULL)
		return (0);

	table_size = ht->size;
	index = key_index((const unsigned char *)key, table_size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];

	temp = (ht->array)[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new->next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			ht->array[index] = new;
			return (1);
		}
		temp = temp->next;
	}

	(ht->array)[index] = new;

	return (1);
}
