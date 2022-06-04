#include <stdio.h>

/**
 * main - Function to print single digits
 *
 * Description: Print single digits of base 10 using only putchar()
 * Return: Returns integer
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	putchar('\n');

	return (0);
}
