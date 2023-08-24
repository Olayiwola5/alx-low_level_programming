#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *curr_node;
	size_t i;

	for (i = 0; str[i]; i++)
		;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->len = i;
	n_node->str = strdup(str);
	n_node->next = NULL;

	curr_node =  *head;
	if (curr_node == NULL)
		*head = curr_node;
	else
	{
		while (curr_node->next != NULL)
		{
			curr_node =  curr_node->next;
		}
		curr_node->next = n_node
	}
	return (*head);
}
