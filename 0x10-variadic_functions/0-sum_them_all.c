#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum
 * @n: num
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int c = 0;

	if (n == 0)
		return (0);
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		c += va_arg(ap, int);
	va_end(ap);

	return (c);
}
