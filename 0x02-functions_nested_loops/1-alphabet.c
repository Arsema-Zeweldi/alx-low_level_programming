#include "main.h"

/**
 * print_alphabet - Print a-z
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int c;

	for (c = 1; c < 27; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
