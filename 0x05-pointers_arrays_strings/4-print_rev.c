#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

