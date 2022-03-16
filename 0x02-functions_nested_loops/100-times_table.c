#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number in the table
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0, pr, b;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			pr = a * b;
			if (b == 0)
				_putchar('0' + pr);
			else if (pr < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(48 + pr);
			}
			else if (pr < 100)
			{
				_putchar(32);
				_putchar(48 + pr / 10);
				_putchar(48 + pr % 10);
			}
			else
			{
				_putchar(48 + pr / 100);
				_putchar(48 + (pr - 100) / 10);
				_putchar(48 + pr % 10);
			}
			if ( b < n)
			{
				_putchar(44);
				_putchar(32);
			}

		}
		_putchar('\n');
		a++;
	}
}
