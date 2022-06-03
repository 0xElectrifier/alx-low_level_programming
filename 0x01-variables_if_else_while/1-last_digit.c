#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function to print modified rand number
 *
 * Description: Print rand number
 * Return: return interger(0)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is ", n, lastDigit);
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
	{
		printf("Last digit of %d is %d and is less ", n, lastDigit);
		printf("than 6 and not 0\n");
	}

	return (0);
}
