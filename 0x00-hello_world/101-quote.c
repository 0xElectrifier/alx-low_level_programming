#include <stdio.h>

/**
 * main - Print to stderr
 *
 * Description: Print to stderr without printf() and puts()
 * Return: Returns an integer(0)
 */
int main(void)
{
	fprintf(stderr, "and that piece of art is useful\" - ");
	fprintf(stderr, "Dora Korpar, 2015-10-19\n");

	return (1);
}
