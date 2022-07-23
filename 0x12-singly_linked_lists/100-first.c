#include "lists.h"

/**
 * bmain - function that gets executed before the main()
 *
 *
 * Return: 0 always
 */
int __attribute__((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
