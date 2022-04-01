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
	(void)argc;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
