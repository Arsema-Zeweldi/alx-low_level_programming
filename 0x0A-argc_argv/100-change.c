#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min no. of cents for change
 * @argc: size of argv
 * @argv: argument on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c, cent, total;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}

	total = 0;
	c = atoi(argv[1]);

	if (c <= -1)
	{
		printf("0\n");
		return (0);
	}
	while (c)
	{
		if (c >= 25)
			cent = 25;
		else if (c >= 10)
			cent = 10;
		else if (c >= 5)
			cent = 5;
		else if (c >= 2)
			cent = 2;
		else
			cent = 1;

		total += c / cent;
		c %= cent;
	}
	printf("%d\n", total);
	return (0);
}
