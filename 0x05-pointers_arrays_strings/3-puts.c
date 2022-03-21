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

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		c++;
	}
	_putchar('\n');
}
