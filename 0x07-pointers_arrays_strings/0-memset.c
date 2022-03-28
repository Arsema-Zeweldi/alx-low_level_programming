#include "main.h"
/**
 * *_memset - fills the memory with a constant byte
 * @s: pointer to a memeory area
 * @b: constant byte
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	while (n > 0)
	{
		s[c] = b;
		c++;
		n--;
	}
	return (s);
}
