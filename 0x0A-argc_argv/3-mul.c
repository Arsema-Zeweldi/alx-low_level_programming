#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: size of argv
 * @argv: argument on command line
 * Return: int
 */
int main(int argc, char *argv[])
{
	int c, mul = 1;

	(void)argc;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	for (c = 1; c < argc; c++)
	{
		mul = mul * atoi(argv[c]);
	}
	printf("%d\n", mul);
	return (0);
}
