#include "main.h"
int change_cent(int *num, int subt, int *change);

int main(int argc, char **argv)
{
	int n, change;

	n = atoi(argv[1]);
	change = 0;
	printf("n: %d\nchange: %d\n", n, change);
	change = change_cent(&n, 4, &change);

	printf("n: %d\nchange: %d\n", n, change);

	return (0);
}

int change_cent(int *num, int subt, int *change)
{
        int *s_change, *s_num;

        s_change = change;
	s_num = num;
        while (*s_num >= subt)
        {
                *s_num -= subt;
                ++*s_change;
        }

        return (*s_change);
}

/**
int change_cent(int num, int subt, int *change)
{
        int *st, dnum;

        st = change;
	dnum = num;
        while (dnum >= subt)
        {
                dnum -= subt;
                *st = *st + 1;
        }

        return (*st);
}
*/
