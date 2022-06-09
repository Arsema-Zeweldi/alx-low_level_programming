#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements in the doubly linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *node1;

	if (!h)
		return (nodes);

	printf("%d\n", h->n);
	nodes++;
	node1 = h->next;

	while (node1)
	{
		printf("%d\n", node1->n);
		nodes++;
		node1 = node1->next;
	}

	return (nodes);
}
