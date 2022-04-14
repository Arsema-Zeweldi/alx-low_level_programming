#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: the number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;
	unsigned int c;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		i = va_arg(ap, int);
		printf("%d", i);
		if (c != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
