#include "lists.h"

int main(void)
{
	int i, j, k, t = 1;
	int *a, *b, *c;

	k = 20;
	i = j = k;
	printf("i = %d\n\
	j = %d\n\n", i, j);

	for (; t < j; t++)
	{
		printf("t = %d", t);
		j++;
	}
	printf("i = %d\n\
	j = %d\n\n", i, j);
/*
	c = &t;
	a = b = c;
	printf("a = %p\n\
	b = %p\n\
	c = %p\n\n", a, b, c);

	c = &j;
	printf("a = %p\n\
	b = %p\n\
	c = %p\n", a, b, c);
*/
	return (0);
}
