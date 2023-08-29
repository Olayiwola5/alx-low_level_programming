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
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < idx; i++)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}

	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
