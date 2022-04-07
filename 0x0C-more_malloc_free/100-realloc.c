#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: previous size of the block
 * @new_size: new size of the block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int c;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return ('\0');
		return (new);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}
	new = malloc(new_size);
	if (!new)
		return ('\0');
	for (c = 0; c < old_size; c++)
		*((char *)new + c) = *((char *)ptr + c);
	free(ptr);
	return ((void *)new);
}
