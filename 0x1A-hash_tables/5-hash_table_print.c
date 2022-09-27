#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, n, table_size;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	i = n = 0; 
	table_size = ht->size;
	printf("{");
	while (i < table_size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (n++)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		i++;
	}

	printf("}\n");
}
