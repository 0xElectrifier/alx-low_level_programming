#include "main.h"
/**
*print_number - print numbers
*@n: takes in an integer
*/
void print_number(int n)
{
	unsigned int i, a, n1;

	if (n < 0)
	{
		n = n * -1;
		putchar('-');
	}
	n1 = n;

	if (n > 9)
	{
		while (n > 9)
		{
			n = n / 10;
			a = a * 10;
		}
		for (; a >= 1; a = a / 10)
			putchar(((n1 / a) % 10) + '0');
	}
	else
		putchar(n1 + '0');
}
