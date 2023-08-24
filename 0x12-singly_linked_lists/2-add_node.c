#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t i;

	i = 0;
	while (str[i])
		i++;
	n_node = malloc(sizeof(list_t));

	n_node->str = strdup(str);
	n_node->len = i;
	n_node->next = head;

	head = n_node;

	return (head);
}

