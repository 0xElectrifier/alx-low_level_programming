#include <stdio.h>

/**int _strlen(char *s)
{
	int i;

	while (i != '\0')
	{
*/
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";

	printf("%s\n", str);

	printf("------");

	printf("%p", str);

	return (0);
}
