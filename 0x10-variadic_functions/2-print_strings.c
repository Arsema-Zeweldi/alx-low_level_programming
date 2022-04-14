#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int c;
	char *i;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		i = va_arg(ap, char*);
		if (i != NULL)
			printf("%s", i);
		else
			printf("nil");

		if (c != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
