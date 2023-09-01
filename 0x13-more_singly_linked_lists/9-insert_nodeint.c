#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - insert new node at the nth node of a linked list.
* @head: a linked list to print
* @idx: the position where new node added.
* @n: value to be added.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *temp;

	if (head == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	node->next = temp->next;
	temp->next = node;
	
	return (node);
}
