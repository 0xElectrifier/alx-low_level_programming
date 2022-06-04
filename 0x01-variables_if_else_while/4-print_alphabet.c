#include <stdio.h>

/**
 * main - Print alphabet function
 *
 * Description: Print a-z + \n, omitting 'e' and 'q'
 * Return: Returns an integer
 */
int main(void)
{
	int lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase == 'e' || lowerCase == 'q')
			continue;
		putchar(lowerCase);
	}
	putchar('\n');

	return (0);
}
