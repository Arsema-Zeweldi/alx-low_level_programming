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

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
