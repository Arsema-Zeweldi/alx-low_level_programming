#include "main.h"
/**
 * _islower - Find lowercase letters
 * @c: The character to check the code
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 1 && c <= 26)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
