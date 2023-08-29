#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - delete a new node at the beginning of a singly linked list.
* @head: a linked list to print
*
* Return: the address of the new element, or NULL if it failed.
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int num = 0;

	if (*head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	num = node->n;
	free(node);

	return (num);
}
