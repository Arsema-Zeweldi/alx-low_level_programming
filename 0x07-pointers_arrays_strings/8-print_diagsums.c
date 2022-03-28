#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -prints the sum of two diagonals of a square
 * @a: array
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c;
	int sum1 = 0;
	int sum2 = 0;
	int d = size * size;

	for (c = 0; c < d; c += size + 1)
	{
		sum1 += a[c];
	}
	for (c = size - 1; c < d - 1; c += size - 1)
	{
		sum2 += a[c];
	}
	printf("%d, %d\n", sum1, sum2);
}
