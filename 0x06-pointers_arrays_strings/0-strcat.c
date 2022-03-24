#include "main.h"
/**
 * *_strcat - concentrates two strings
 * @dest: Hello
 * @src: World!
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	d = 0;

	while (*(dest + c))
	{
		c++;
	}

	while ((*(dest + c) = *(src + d)))
	{
		c++;
		d++;
	}
	return (dest);
}
