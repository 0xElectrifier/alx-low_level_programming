#include "main.h"

int change_cent(int num, int subt, int *change)
{
        for (; num < subt; change++)
                num = num - subt;
	change = change + 33;
        return (num);
}

int main(int argc, char **argv)
{
	int n, change;

	change = 0;
	printf("n: %d\nchange: %d\n", n, change);
	change_cent(atoi(argv[1]), 25, &change);

	printf("n: %d\nchange: %d\n", n, change);

	return (0);
}
