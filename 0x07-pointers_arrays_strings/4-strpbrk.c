#include "main.h"
/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: source string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int c;
	int d;
	char *p;

	c = 0;
	while (s[c] != '\0')
	{
		d = 0;
		while (accept[d] != '\0')
		{
			if (accept[d] == s[c])
			{
				p = &s[c];
				return (p);
			}
			d++;
		}
		c++;
	}
	return (0);
}
