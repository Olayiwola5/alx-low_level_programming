#include <string.h>
#include "lists.h"
/**
* free_list - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/
void free_list(list_t *head)
{
	/* creates a temporary nod */
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
		free(temp->next);
	}
}
