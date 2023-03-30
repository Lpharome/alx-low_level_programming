#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list.
 *
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t numb_node = 0;

	while (h)
	{
		numb_node += 1;
		h = h->next;
	}

	return (numb_node);
}
