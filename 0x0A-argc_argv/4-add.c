#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if c is an integer
 * @s: character array
 * Return: 0
 */
int isInteger(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] < '0' || s[c] > '9')
			return (1);
		c++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: size of argv
 * @argv: argument on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("ERROR\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
