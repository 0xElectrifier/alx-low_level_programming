#include <stdio.h>

/**
 * main - main function
 *
 * Description: Print a-z the A-Z
 * Return: Return integer(0)
 */
int main(void)
{
	char smallLetter;
	char capitalLetter;

	for (smallLetter = 'a'; smallLetter <= 'z'; smallLetter++)
		putchar(smallLetter);
	for (capitalLetter = 'A'; capitalLetter <= 'Z'; capitalLetter++)
		putchar(capitalLetter);
	putchar('\n');

	return (0);
}
