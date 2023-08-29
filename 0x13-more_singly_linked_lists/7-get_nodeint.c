#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t linked list.
 * @head: a linked list to print
 * @index: the index of the node, starting at 0.
 * Return: the nth node, NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
