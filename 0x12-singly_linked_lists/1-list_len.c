#include "lists.h"
/**
* list_len - count the elements of a linked list.
* @h: a singly linked list
*
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
