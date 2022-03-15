#include "main.h"
/**
 * jack_bauer - Prints the minutes between 00:00 and 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int b;
	int c;
	int d;
	int e;
	int a = 9;

	c = 0;
	while (c <= 2)
	{
		if (c == 2)
		{
			/*Restrain to 23h, not 29*/
			a = 3;
		}
		b = 0;
		while (b <= a)
		{
			e = 0;
			while (e <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar('0' + c);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + d);
					_putchar('0' + e);
					_putchar('\n');
					d++;
				}
				e++;
			}
			b++;
		}
		c++;
	}
}
