#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm for hashing
 * @str: string to be hashed
 *
 * Return: hashed key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash, i;

	i = 0;
	hash = 5381;

	while(str[i] != '\0')
		hash = ((hash << 5) + hash) + str[i++];

	return (hash);
}
