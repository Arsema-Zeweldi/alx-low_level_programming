#include "main.h"
/**
 * check - checks if n is prime or not
 * @c: integer
 * @n: integer
 * Return: int
 */
int check(int n, int c)
{
	if (c >= n && n > 1)
	{
		return (1);
	}
	else if (n % c == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, c + 1));
	}
}

/**
 * is_prime_number - returns 1 if n is a prime number
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}
