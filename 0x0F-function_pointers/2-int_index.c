#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
