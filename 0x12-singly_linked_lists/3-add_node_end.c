#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer list_t head
 * @str: string to node
 *
 * Return: 0;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;
	size_t len;

	if (!head)
		return (NULL);

	if (!str)
		str = NULL;

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
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;

	return (node);
}
