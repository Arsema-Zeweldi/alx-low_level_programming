#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned integer
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *n;

	if (size == 0)
	{
		return (NULL);
	}

	n = malloc(size * sizeof(char));
	if (n == NULL)
	{
		return (n);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
