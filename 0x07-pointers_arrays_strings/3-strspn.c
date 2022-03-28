#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int c;
	int d;
	unsigned int n;

	n = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0' && accept[d] != s[c]; d++)
			;
		if (s[c] == accept[d])
		{
			n++;
		}
		if (accept[d] == '\0')
		{
			return (n);
		}
	}
	return (n);
}
