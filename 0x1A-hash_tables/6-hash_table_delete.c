#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to be deleted
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, table_len;
	hash_node_t *copy, *temp;

	if (ht == NULL || ht->size == 0)
		return;

	i = 0;
	table_len = ht->size;
	while (i < table_len)
	{
		copy = ht->array[i];
		while (copy != NULL)
		{
			temp = copy;
			copy = copy->next;
			free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht);
}
