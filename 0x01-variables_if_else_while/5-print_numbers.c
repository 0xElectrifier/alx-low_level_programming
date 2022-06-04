#include <stdio.h>

/**
 * main - Function to print base 10 single digits
 *
 * Description: Starting from 0, print all single digits numbers
 * Return: Returns integer (0)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		printf("%c\n", number);

	return (0);
}
