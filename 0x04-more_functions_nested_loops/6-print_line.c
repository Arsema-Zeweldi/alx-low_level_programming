#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number to check code
 * Return: void
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
