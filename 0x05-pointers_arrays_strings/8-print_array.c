#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	c = 0;
	for (n--; n >= 0; n--, c++)
	{
		printf("%d", a[c]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
