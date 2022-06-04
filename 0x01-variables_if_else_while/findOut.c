#include <stdio.h>

/**
 * main - Prints double digit combo
 *
 * Description: Function to print two digit combo
 * Return: (0) is success
 */
int main(void)
{
	int i;
	int j;
//	int tens;

	for (i = '0'; i <= '8'; i++)
	{
		putchar(i);
		for (j = '1'; j <= '9'; j++)
		{
			putchar(j);
			if (j == '9')
				break;
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
