#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: size of argv
 * @argv: arguments on command line
 * Return: int
 */
int main(int argc, char *argv[])
{
	int c;

	(void)argc;
	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
