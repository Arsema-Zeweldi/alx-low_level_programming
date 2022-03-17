#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of tirangle
 * Return: void
 */
void print_triangle(int size)
{
	int c;
	int d;

	for (c = 1; c <= size; c++)
	{
		for (d = c; d < size; d++)
		{
			_putchar(32);
		}
		for (d = 1; d <= c; d++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
