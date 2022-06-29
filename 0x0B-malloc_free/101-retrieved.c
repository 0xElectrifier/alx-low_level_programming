#include "main.h"

/**
 * is_new_word - checks if a new word is formed
 * @str: string to be checked
 * @j: current index of str
 *
 * Return: 0 if false, otherwise anything
 */
int is_new_word(char *str, int j)
{
	return ((str[j] == ' ' || str[j] == '\0') && (str[j - 1] != ' '));
}

/**
 * free_arr - frees a 2D array at row if malloc fails
 * @array: array to be freed
 * @row: the last row where it value was NULL
 *
 * Return: array
 */
char **free_arr(char **array, int row)
{
	int x;

	for (x = row - 1; x >= 0; x--)
	{
		if (array[x])
		{
			free(array[x]);
			array[x] = NULL;
		}
	}

	free(array);

	return (array);
}

/**
 * strtow - function that splits a string into words
 * @str: string to be splitted
 *
 * Return: splitted string
 */
char **strtow(char *str)
{
	int len_str, word, row, col, x, j, k;
	char **s;

	for (word = len_str = 0; str[len_str] != '\0'; len_str++)
	{
		if (str[len_str] == ' ')
			word++;
	}
	word++;

	s = malloc(word * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (row = j = 0; j <= len_str; j++, k++)
	{
/**		if (str[j] == ' ')
			k = 0;
*/		if (is_new_word(str, j))
		{
			s[row] = malloc((k + 1) * sizeof(char));
			if (s[row] == NULL)
			{
				free_arr(s, row);
				return (NULL);
			}
			for (col = 0, x = j - k; x < j; col++, x++)
			{
				s[row][col] = str[x];
			}
			s[row][col] = '\0';
 
			k = -1;
			row++;
		}
	}

	return (s);


}
