#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements in list_t
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		printf("[%d] %s\n", current_node->len,
		current_node->str != NULL ? current_node->str : "(nil)");
		current_node = current_node->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
