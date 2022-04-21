#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns number of elements
 * @h: pointer to list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		element++;
	}
	return (element);
}
