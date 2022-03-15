#include "main.h"
/**
 * jack_bauer - Prints the minutes between 00:00 and 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a;

	for (a = 0; a < 24; a++)
	{
		int min;

		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
