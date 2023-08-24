#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int i;

	i = 0;
	while (str[i] != NULL)
		i++;

	n_node -> len = i;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node -> str = strdup(str);
	n_node -> next = *head
	*head = n_node;

	return (*head);
}
