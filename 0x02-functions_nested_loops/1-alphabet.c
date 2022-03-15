#include "main.h"
/**
 * print_alphabet  - Print a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c;

	c = 0;
	while (c < 27)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
