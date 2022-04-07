#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr;
	unsigned int c, d;

	if (min > max)
		return (NULL);
	c = (max - min) + 1;
	ptr = malloc(c * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
	{
		ptr[d] = min + d;
	}
	return (ptr);
}
