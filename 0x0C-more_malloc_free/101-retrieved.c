#include "main.h"

/**
 * print_error - function to print 'error' and exit(98) status
 *
 * Return - nothing
 */
void print_error(void)
{
	int i;
	char *message = "Error\n";

	for (i = 0; message[i] != '\0'; i++)
		_putchar(message[i]);

	exit(98);
}

/**
 * has_non_digit - function that checks a string for non digits
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if false, otherwise any integer
 */
int has_non_digit(char *str1, char *str2)
{
	unsigned int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] < '0' || str1[i] > '9')
			return (1);
	}
	for (j = 0; str2[j] != '\0'; j++)
	{
		if (str2[j] < '0' || str2[j] > '9')
			return (1);
	}

	return (0);
}

/**
 * _strlen - calculates length of string
 * @str: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	return (len);
}

/**
 * init_arr - initializes array
 * @arr: array to initialize
 * @len: length of array
 *
 * Return: void
 */
void init_arr(char *arr, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		arr[i] = '0';

	arr[i] = '\0';
}

/**
 * mul_ext - an extention of mul function that reverses $result and prints it
 * @result: reversed string of the product of two strings
 *
 * Return: nothing
 */
void mul_ext(char *result)
{
	int i;

	i = _strlen(result) - 1;
	while (i >= 0 && result[i] = '0')
		i--;
	if (i == -1)
		return;


}

/**
 * mul - function that multiplies two strings
 * @dest: destination string
 * @str1: first string of integers
 * @str2: second string of integers
 * @len1: length of first string
 * @len2: length of second string
 *
 * Return: always 0
 */
int mul(char *dest, char *str1, char *str2)
{
	unsigned int len1, n1, i, res_n1;
	unsigned int len2, n2, j, res_n2;
	int carry, sum;
	char *result, result_i;

	len1 = _strlen(str1);
	len2 = _strlen(str2);

	if (len1 == 0 || len2 == 0)
		return ('0');

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		print_error();
	init_arr(result);

	res_n1 = res_n2 = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = res_n2 = 0;
		n1 = str1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = str2[j] - '0';
			result_i = result[res_n1 + res_n2];

			sum = n1 * n2 + (result_i - '0') + carry;

			carry = sum / 10;
			result_i = sum % 10 + '0';

			res_n2++;
		}
		if (carry > 0)
			result_i += carry + '0';

		res_n1++;
	}
	mul_ext(result);


	return (0);
}
/**
 * main - function to multiply strings
 * @argc: number of arguments passed at terminal
 * @argv: pointer to the arguments passed at terminal
 *
 * Return: 0 always or exit(98) status on error
 */
int main(int argc, char **argv)
{
	int i, len1, len2;
	char *mul_arr;

	if (argc != 3 || is_not_digit(argv[1], argv[2]))
	{
		print_error();
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	mul_arr = malloc(len1 + len2 + 1);
	if (mul_arr == NULL)
		print_error();

	mul(mul_arr, argv[1], argv[2]);
	
	
	return (0);
}
