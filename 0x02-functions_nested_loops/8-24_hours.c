#include "main.h"

/**
 * jack_bauer - Function
 * @void: Takes no argument
 * Description: Omo
 * Return: Void
 */
void jack_bauer(void)
{
	char i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
