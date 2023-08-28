#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node = *head;
	if (node == NULL)
		*head = node;
	else
	{
		while (node != NULL)
		{
			node->n = n;
			node->next = *head;
			/* updating the head */
			*head = node;
		}
	}
	return (node);
}
