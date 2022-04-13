#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - executes the codes
 * @argc: length of command line
 * @argv: arguments on command line
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*func_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func_p = get_op_func(argv[2]);

	if (func_p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
