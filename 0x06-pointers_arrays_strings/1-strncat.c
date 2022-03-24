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

	c = d = 0;
	while (*(dest + c))
	{
		c++;
	}
	while (d < n && *(src + d))
	{
		*(dest + c) = *(src + d);
		c++;
		d++;
	}
	if (d < n)
	{
		*(dest + c) = *(src + d);
	}
	return (dest);
}
