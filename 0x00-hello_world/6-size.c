#include <stdio.h>

/**
 * main - sizeof()
 *
 * Description: Finding the size of data types in system memory
 * Return: Returns int (0)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu bytes(s),\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));

	return (0);
}
