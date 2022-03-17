#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int c;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
