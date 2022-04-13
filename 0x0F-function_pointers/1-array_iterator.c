#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a functions
 * @size: size of the array
 * @action: pointer to function
 * @array: pointer to int
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (action != NULL && array != NULL)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}
