#include "main.h"
/**
 * *_memcpy - copies a memory area
 * @dest: destination
 * @src: source
 * @n: nummber of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;

	for (c = 0; n > 0; c++, n--)
	{
		dest[c] = src[c];
	}
	return (dest);
}
