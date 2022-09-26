#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key of the item to be retrieved
 *
 * Return: the value associated with @key, or `NULL` if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int table_size, index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	table_size = ht->size;
	index = key_index(key, table_size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (key->value);
		temp = temp->next;
	}

	return (NULL);
}
