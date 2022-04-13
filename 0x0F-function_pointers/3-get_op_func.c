#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function pointer
 * @s: character pointer
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int c = 0;

	while (ops[c].op != NULL && *(ops[c].op) != *s)
		c++;
	return (ops[c].f);
}
