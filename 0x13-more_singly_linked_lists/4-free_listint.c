#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *del_node;

	while (head)
	{
		del_node = head;
		head = head->next;
		free(del_node);
	}
}

