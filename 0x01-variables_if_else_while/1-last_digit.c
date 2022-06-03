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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit;

	if (n > 0)
		lastDigit = n % 10;
	else if (n == 0)
		lastDigit = 0;
	else
		lastDigit = -(n % 10);


	if (lastDigit > 5)
		printf("Last digit of %d is %d and is "
				"greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is less "
				"than 6 and not 0\n", n, lastDigit);

	return (0);
}
