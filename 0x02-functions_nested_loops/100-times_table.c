#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number in the table
 * Return: void
 */
void print_times_table(int n)
{
	int c;
	int d;
	int pr;

	if (n > 15 && n < 0)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);
			for (d = 1; d <= n; d++)
			{
				pr = c * d;
				_putchar(32);
				_putchar(44);
				if (pr <= 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				else if (pr <= 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
	}
	_putchar('\n');
}
