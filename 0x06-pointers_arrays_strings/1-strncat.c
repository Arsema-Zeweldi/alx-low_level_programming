#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	for (d = 0; d < 1024; d++)
	{
		if (dest[d] == '\0')
		{
			break;
		}
		c++;
	}

	for (d = 0; src[d] != '\0' && d < n; d++)
	{
		dest[c + d] = src[d];
	}
	dest[c + d] = '\0';
	return (dest);
}
