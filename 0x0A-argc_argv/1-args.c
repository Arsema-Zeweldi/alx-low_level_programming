#include "main.h"
#include <stdio.h>
/**
 * main- prints command length
 * @argc: size of argv
 * @argv: argument in command line
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
