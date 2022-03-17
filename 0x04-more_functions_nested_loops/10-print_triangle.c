#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of tirangle
 * Return: void
 */
void print_triangle(int size)
{
	int c = 1;
	int d;

	while (c <= size && size > 0)
	{
		d = 0;
		while (d < size - c)
		{
			_putchar(32);
			d++;
		}
		d = 0;
		while (d < c)
		{
			_putchar(35);
			d++;
		}
		_putchar('\n');
		c++;
	}
	if (c == 1)
		_putchar('\n');
}
