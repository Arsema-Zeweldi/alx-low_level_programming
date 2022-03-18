#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int c;
	int d;
	int e = 1;
	int f = n % 10;

	n /= 10;
	c = n;

	if (f < 0)
	{
		f *= -1, c *= -1, n *= -1;
		_putchar(45);
	}
	if (c > 0)
	{
		while (c / 10 != 0)
		{
			c /= 10, e *= 10;
		}
		while (e > 0)
		{
			d = n / e;
			_putchar('0' + d);
			n -= d * e;
			e /= 10;
		}
	}
	_putchar('0' + f);
}
