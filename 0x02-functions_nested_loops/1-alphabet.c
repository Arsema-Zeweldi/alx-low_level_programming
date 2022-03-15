#include "main.h"

/**
 * print_alphabet - Print a-z
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int c;

	for (c = 0; c < 26; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
