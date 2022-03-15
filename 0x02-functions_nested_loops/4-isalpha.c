#include "main.h"
/**
 * _isalpha - uppercase or lowercase
 * @c: The character to check the code
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
