#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int i = 0;
	hash_table_t *ht;
	hash_node_t *temp;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "test");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "stylist", "stylist");
	hash_table_set(ht, "subgenera", "subgenera");
	hash_table_set(ht, "dram", "dram");
	while (i < 1024)
	{
		temp = (ht->array[i]);
		while (temp != NULL)
		{
			printf("Address %d -- %s\n", i, (temp)->value);
			temp = temp->next;
		}

		i++;
	}

	return (EXIT_SUCCESS);
}
