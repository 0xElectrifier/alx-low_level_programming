#include <stdio.h>

/**
 * main - Main Function
 *
 * Description: Print base !6
 * Return: Return integer (0)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
