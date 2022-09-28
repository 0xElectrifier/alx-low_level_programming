#include "hash_tables.h"

/**
 * shash_table_create - Allocates a PHP internal like HashTable
 * @size: the size of the array to be allocated
 *
 * Return: the allocated HashTable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	table->size = size;
	table->array = array;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - assigns value in the shash_table hash table
 * @ht: pointer to the hash table
 * @key: the key to the value
 * @value: the value to be assigned into the table
 *
 * Return: 1 if successful otherwise, 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp, *stemp;
	unsigned long int index, s_index, t_size, table_size;

	if (key == NULL || ht == NULL)
		return (0);

	t_size = table_size = ht->size;
	index = key_index((CUC)key, table_size);

	temp = (ht->array)[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (temp->value != NULL)
				free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];

	stemp = ht->shead;
	if (stemp != NULL)
		s_index = key_index((CUC)stemp->key, table_size);
	if ((stemp == NULL) || (index <= s_index))
	{
		new->sprev = NULL;
		new->snext = stemp;
		if (stemp == NULL)
			ht->stail = new;
		else
			stemp->sprev = new;
		ht->shead = new;
	}
	else
	{
		while (stemp->snext != NULL)
		{
			s_index = key_index((CUC)stemp->snext->key, t_size);
			if (index <= s_index)
				break;
			stemp = stemp->snext;
		}
		if (stemp->snext == NULL)
			ht->stail = new;
		else
			stemp->snext->sprev = new;
		new->sprev = stemp;
		new->snext = stemp->snext;
		stemp->snext = new;
	}

	(ht->array)[index] = new;

	return (1);
}

/**
 * shash_table_get - searches @ht for a value associated with
 *			the provided key
 * @ht: pointer to the hash table
 * @key: the key to the requested value
 *
 * Return: the retrieved value, or NULL if key can't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int table_size, index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	table_size = ht->size;
	index = key_index((const unsigned char *)key, table_size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints out the values in a shash_table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *stemp;

	if (ht == NULL)
		return;

	stemp = ht->shead;
	printf("{");
	while (stemp != NULL)
	{
		printf("'%s': '%s'", stemp->key, stemp->value);
		if (stemp->snext != NULL)
			printf(", ");

		stemp = stemp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints @ht in reverse order
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *stemp;

	if (ht == NULL)
		return;

	stemp = ht->stail;
	printf("{");
	while (stemp != NULL)
	{
		printf("'%s': '%s'", stemp->key, stemp->value);
		if (stemp->sprev != NULL)
			printf(", ");

		stemp = stemp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes an shash_table
 * @ht: the hash table to be deleted
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *stemp, *temp;

	if (ht == NULL)
		return;

	stemp = ht->shead;
	while (stemp != NULL)
	{
		temp = stemp;
		stemp = stemp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
