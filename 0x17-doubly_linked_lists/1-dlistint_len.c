#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a linked dlistint_t list
 * @*h: pointer
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *node1;

	if (!h)
		return (nodes);

	nodes++;
	node1 = h->next;

	while (node1)
	{
		nodes++;
		node1 = node1->next;
	}

	return (nodes);
}
