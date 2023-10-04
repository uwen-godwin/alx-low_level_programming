#include <stdlib.h>
#include "main.h"

/**
 * count_word - function that count the number of words in a string
 * @s: The string to evaluate
 * Return: Return number of words
 */

int count_word(char *s)
{
	int flag, a, w;

	flag = 0;
	w = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - The program that splits a string into words
 * @str: The string to split
 *
 * Return: Return pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int f, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (f = 0; f <= len; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (c)
			{
				end = f;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = f;
	}
	matrix[k] = NULL;
	return (matrix);
}
