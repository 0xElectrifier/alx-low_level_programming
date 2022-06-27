#include "main.h"

int main(void)
{
	char *s;

	s = malloc(0);

	s[0] = 'c';

	printf("%s\n", s);
	return (0);
}
