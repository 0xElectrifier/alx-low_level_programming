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
 * print_out - function to print out an array / string
 * @str: string to output
 * @strlen: length of 'str'
 *
 * Return: nothing
 */
void print_out(char *str, int strlen)
{
	int i;

	for (i = 0; i < strlen; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
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
	int i, j;

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

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * init_arr - initializes array
 * @arr: array to initialize
 * @len: length of array
 *
 * Return: void
 */
void init_arr(char *arr, int len)
{
	int i;

	for (i = 0; i < len - 1; i++)
		arr[i] = '0';

	arr[i] = '\0';
}

/**
 * mul_ext - an extention of mul function that reverses $result and prints it
 * @result: reversed string of the product of two strings
 *
 * Return: nothing
 */
int mul_ext(char *result)
{
	int result_len, i, j;
	char *mul_arr;

	result_len = _strlen(result) - 1;
	while (result_len >= 0 && result[result_len] == '0')
		result_len--;
	if (result_len == -1)
	{
		print_out("0", 1);
		return (0);
	}

	j = ++result_len;

	mul_arr = malloc((result_len) * sizeof(char));
	if (mul_arr == NULL)
		print_error();

	for (i = 0; i < result_len + 1; i++)
	{
		mul_arr[i] = result[j - 1];
		j--;
	}

	print_out(mul_arr, result_len);

	free(result);
	free(mul_arr);

	return (0);
}

/**
 * mul - function that multiplies two strings
 * @str1: first string of integers
 * @str2: second string of integers
 *
 * Return: always 0
 */
int mul(char *str1, char *str2)
{
	int len1, n1, i, res_n1;
	int len2, n2, j, res_n2;
	int carry, sum, result_len;
	char *result, result_i;

	len1 = _strlen(str1);
	len2 = _strlen(str2);

	if (len1 == 0 || len2 == 0)
		print_error();

	result_len = len1 + len2 + 1;
	result = malloc(result_len);
	if (result == NULL)
		print_error();
	init_arr(result, result_len);

	res_n1 = res_n2 = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = res_n2 = 0;
		n1 = str1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = str2[j] - '0';
			result_i = result[res_n1 + res_n2];

			sum = n1 * n2 + carry + (result_i - '0');
			carry = sum / 10;
			result[res_n1 + res_n2] = sum % 10 + '0';

			res_n2++;
		}
		if (carry != 0)
			result[res_n1 + res_n2] = carry + '0';
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
	if (argc != 3 || has_non_digit(argv[1], argv[2]))
	{
		print_error();
	}

	mul(argv[1], argv[2]);

	return (0);
}
