#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_int(va_list ap);
void print_float(va_list ap);
void print_char(va_list ap);
void print_str(va_list ap);

/**
 * struct printTypeStruct - Struct operators
 *
 * @type: Char
 * @printer: The function associated
 */
typedef struct typ
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;
#endif
