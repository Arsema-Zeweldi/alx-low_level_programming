#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new memory space
 * @str: charcter to check code
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int c = 0, d = 0;
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[c] != '\0')
		c++;

	n = malloc(c * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}

	while (str[d] != '\0')
	{
		n[d] = str[d];
		d++;
	}
	return (n);
}
