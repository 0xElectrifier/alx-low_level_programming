#include "lists.h"

/**
 * bmain - function that gets executed before the main()
 *
 *
 * Return: 0 always
 */
int __attribute__((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house ");
	printf("upon my back!\\n\n");

	return (0);
}
