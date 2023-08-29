#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - find the the sum of all the data in a linked list.
* @head: a linked list to print
*
* Return: the nth node, NULL otherwise.
*/

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = malloc(sizeof(listint_t));
	node = head;

	if (head == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->data;
		node = node->next;
	}
	return (sum);
}
