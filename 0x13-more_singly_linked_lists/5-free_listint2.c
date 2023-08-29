#include "lists.h"

/**
* free_listint2 - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *del_node;

	if (head == NULL)
		return;
	while (*head)
	{
		del_node = (*head)->next;
		free(*head);
		(*head) = del_node;
	}
}
