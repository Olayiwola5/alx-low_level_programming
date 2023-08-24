#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a linked list.
* @h: a linked list to print
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;
	
	i = 0;
	while (h == NULL)
	{
		printf("[0] (nil)\n");
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		h = h->next;
		i++;
	}
	return (i);
}
