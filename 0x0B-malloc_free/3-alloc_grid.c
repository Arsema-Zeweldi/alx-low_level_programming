#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	width = 0;
	height = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
