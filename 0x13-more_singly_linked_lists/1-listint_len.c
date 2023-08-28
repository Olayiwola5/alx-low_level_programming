#include "lists.h"
/**
 * listint_len - counts all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	int counter;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node = h;
	counter = 0;
	while (node != NULL)
	{
		node = node->next;
		counter++;
	}
	return (counter)
}
