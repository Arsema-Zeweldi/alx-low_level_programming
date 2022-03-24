#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int c;
	int d;
	char s1[] = "ol_ea__t";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; s1[d] != '\0'; d++)
		{
			if (s[c] == s1[d] || s[c] == (s1[d] - 32))
			{
				s[c] = d + 48;
			}
		}
	}
	return (s);
}
