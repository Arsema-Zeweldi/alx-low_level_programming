#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: size of argv
 * @argv: argument on command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
