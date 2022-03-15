#include "main.h"
/**
 * jack_bauer - Prints the minutes between 00:00 and 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 50; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
						break;
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
