#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - Function to check for positivity/negativity of number
 *@j: Takes integer j as arguement
 * Description: Take a randoom number and check if result is
 *		positive or negative
 * Return: Return integer(0)
 */
int positive_or_negative(int j)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
