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
 * init_node - initializes a node
 * @key: key to node
 * @value: value of new node
 * 
 * Return: pointer to the new node
 */
shash_node_t *init_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = new->sprev = new->snext = NULL;

	return (new);
}

/**
 * assign_sorted_list - assigns @node to @ht, sorted On ASCII value
 * @ht: the hash table
 * @node: the node to be fixed
 *
 * Return: nothing
 */
void assign_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	unsigned long int table_size;
	shash_node_t *stemp;

	table_size = ht->size;
	stemp = ht->shead;
	if (stemp == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}

	while (stemp != NULL)
	{
		if (strcmp(node->key, stemp->key) < 0)
			break;
		stemp = stemp->snext;
	}
	if (stemp == NULL)
	{
		ht->stail->snext = node;
		node->sprev = ht->stail;
		ht->stail = node;

	}
	else
	{
		if (stemp->sprev == NULL)
			ht->shead = node;
		else
			stemp->sprev->snext = node;
		node->sprev = stemp->sprev;
		node->snext = stemp;
		stemp->sprev = node;
	}
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
	shash_node_t *new, *temp;
	unsigned long int index, table_size;

        if (ht == NULL || ht->array == NULL || ht->size == 0 ||
            key == NULL || strlen(key) == 0 || value == NULL)
                return (0);

	table_size = ht->size;
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

	new = init_node(key, value);
	if (new == NULL)
		return (0);
	(ht->array)[index] = new;
	assign_sorted_list(ht, new);

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
