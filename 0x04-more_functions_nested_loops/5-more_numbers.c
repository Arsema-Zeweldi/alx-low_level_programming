#include "main.h"
/**
 * more_numbers - prints the numbers 0 - 14 10x
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
