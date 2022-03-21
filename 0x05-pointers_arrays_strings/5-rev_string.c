#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int c, len, temp;

	len = strlen(s);

	for (c = 0; c < len / 2; c++)
	{
		temp = s[c];
		s[c] = s[len - c - 1];
		s[len - c - 1] = temp;
	}
}
