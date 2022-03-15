#include "main.h"
/**
 * main - Print "_putchar"
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	char a[] = "_putchar";

	for (c = 0; c < 1; c++)
	{
		_putchar(a[c]);
	}
	_putchar('\n');
	return (0);
}
