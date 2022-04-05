#include "main.h"
#include <stdlib.h>
/**
 * wordCounterRec - count num of words
 * @str: pointer to char
 * @i: int
 * Return: int
 */
int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}
/**
 * word_counter - counts words in 1D
 * @str: pointer to char
 * Return: int
 */
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}
/**
 * strtow - splits a string into two words
 * @str: pointer to char
 * Return: char
 */
char **strtow(char *str)
{
	char **ptr;
	int c, d, n, words;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}
	words = word_counter(str);
	if (words < 1)
	{
		return (NULL);
	}
	c = 0;
	while (c < words && *str != '\0')
	{
		if (*str != ' ')
		{
			d = 0;
			while (str[d] != ' ')
				d++;
			ptr[c] = malloc(sizeof(char) * (d + 1));
			if (ptr[c] == NULL)
			{
				while (--c >= 0)
					free(ptr[--c]);
				free(ptr);
				return (NULL);
			}
			n = 0;
			while (n < d)
			{
				ptr[c][n] = *str;
				n++, str++;
			}
			ptr[c][n] = '\0';
			c++;
		}
		str++;
	}
	ptr[c] = '\0';
	return (ptr);
}
