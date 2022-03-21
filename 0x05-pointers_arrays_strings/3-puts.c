#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string to stdout
 * @str: string to be evaluated
 * Return: void
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
