#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
