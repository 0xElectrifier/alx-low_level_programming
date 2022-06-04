#include <stdio.h>

/**
 * main - Function that prints lowwercase alphabet in reverse
 *
 * Description: Prints lowercase alphabet in reverse with putchar()
 * Return: Returns integer(0)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
