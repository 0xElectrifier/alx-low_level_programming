#include "hash_tables.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: str to be referenced
 *
 * Return: pointer to the newly allocated space
 */
char *_strdup(const char *str)
{
	unsigned int i, str_len;
	char *s;

	if (str == NULL)
		return (NULL);

        while (str[str_len] != '\0')
		str_len++;
        s = malloc(str_len * sizeof(char) + 1);
        if (s == NULL)
                return (NULL);

        for (i = 0; i < str_len; i++)
                s[i] = str[i];

        return (s);
}
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
	hash_node_t *new;
	unsigned long int index, table_size;

	if (key == NULL)
		return (0);

	table_size = ht->size;
	index = key_index((const unsigned char *)key, table_size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = _strdup(key);
	new->value = _strdup(value);
	new->next = (ht->array)[index];

	(ht->array)[index] = new;

	return (1);
}
