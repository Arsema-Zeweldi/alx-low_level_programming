#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: int
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
