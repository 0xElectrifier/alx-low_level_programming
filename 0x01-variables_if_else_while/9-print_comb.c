#include <stdio.h>

/**
 * main - Function to print single digit numbers
 *
 * Description: Print single digit numbers seperated by ', '
 * Return: 0 is success
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
