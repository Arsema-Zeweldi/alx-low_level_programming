#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: Hello
 * @s2: World!
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' || s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
	}
	return (0);
}
