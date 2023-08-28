#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", node->n);
		counter++;
		node = node->next;
	}
	return (counter);
}
