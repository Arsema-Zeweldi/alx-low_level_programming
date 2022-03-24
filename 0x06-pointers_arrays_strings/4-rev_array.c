#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer to an integer
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
