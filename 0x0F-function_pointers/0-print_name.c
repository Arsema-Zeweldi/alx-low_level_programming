#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: character pointer to the name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
