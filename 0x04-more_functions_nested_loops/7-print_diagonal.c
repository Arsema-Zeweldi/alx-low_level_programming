#include "main.h"
/**
 * print_diagonal - draw diagonal line
 * @n: num of times \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	char c;
	char d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d <= c; d++)
		{
			if (c == d)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
