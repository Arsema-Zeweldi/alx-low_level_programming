#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
		{
			return (s + d);
		}
	}
	return ('\0');
}
