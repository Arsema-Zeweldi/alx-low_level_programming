#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char string
 * @src: char string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');

	return (dest);
}
