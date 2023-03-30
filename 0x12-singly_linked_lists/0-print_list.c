#include "lists.h"

/**
 * print_list - print linked list
 *
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numb_node = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		numb_node += 1;
		h = h->next;
	}

	return (numb_node);
}
