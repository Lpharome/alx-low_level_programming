#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer list_t head
 * @str: string to node
 *
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
