#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints integers
 * @ap: arguments from print-all
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - prints float
 * @ap: arguments from print_all
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_char - prints char
 * @ap: arguments from print_all
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_str - prints string
 * @ap: arguments from print_all
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char*);

	s == NULL ? printf("(nil)") : printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: all types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *s = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", s);
				printType[j].printer(ap);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
