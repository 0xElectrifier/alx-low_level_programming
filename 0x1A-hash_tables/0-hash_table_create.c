#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array to be allocated
 *
 * Return: pointer to the a newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t) * size);
	if (arr == NULL)
		return (NULL);

	table->size = size;
	table->array = arr;

	return (table);
}
