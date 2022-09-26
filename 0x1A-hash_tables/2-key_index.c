#include "hash_tables.h"

/**
 * key_index - computes the index of a key using the djb2 algorithm
 * @key: the key
 * @size: size of the array
 *
 * Return: the index index of @key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
