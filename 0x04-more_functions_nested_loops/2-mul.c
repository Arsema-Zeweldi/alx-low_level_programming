#include "main.h"
/**
 * mul - multiplies two integers
 * @a: num1
 * @b: num2
 * Return: a * b
 */
int mul(int a, int b)
{
	int pr;

	if (a > 0 && b > 0)
	{
		pr = a * b;
		return (pr);
	}
	else if (a < 0 && b < 0)
	{
		pr = a * b;
		return (pr);
	}
	else if (a < 0 && b > 0)
	{
		pr = a * b;
		return (pr);
	}
	else if (a > 0 && b < 0)
	{
		pr = a * b;
		return (pr);
	}
	else
	{
		return (0);
	}
}
