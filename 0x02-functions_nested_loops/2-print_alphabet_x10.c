#include "main.h"
/**
 * print_alphabet_x10 - Print a-z x10
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int b = 0;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
