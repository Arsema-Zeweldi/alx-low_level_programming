#include "main.h"
/**
 * square - retruns the square
 * @c: square root of n
 * @n: c squared
 * Return: int
 */
int square(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c < n)
	{
		return (square(n, c + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - retruns the square root of a number
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (square(n, 1));
}
