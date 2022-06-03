#include <stdio.h>

/**
 * main - prints letters of alphabet
 *
 * Description: Using only putchar()
 * Return: returns integer (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
