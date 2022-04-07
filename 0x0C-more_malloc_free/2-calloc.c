#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory
 * @nmemb: int 1
 * @size: int 2
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c, d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = nmemb * size;
	ptr = malloc(c * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
		*(ptr + d) = 0;
	return (ptr);

}
