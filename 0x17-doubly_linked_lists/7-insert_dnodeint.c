#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of dlistint_t
 * @idx: unsigned int
 * @n: unsigned int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node1;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	node1 = *h;

	while (idx != 0)
	{
		node1 = node1->next;
		idx--;
		if (node1 == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = node1;
	new->prev = node1->prev;
	if (node1->prev != NULL)
		node1->prev->next = new;

	return (node1);
}
