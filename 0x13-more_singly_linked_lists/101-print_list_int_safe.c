#include "lists.h"
#include <stdio.h>
/**
 * check_looped_listint - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node1 = head->next;
	node2 = (head->next)->next;
	while (node2) /* check if there is loop in the list */
	{
		if (node1 == node2)
			break;
		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	if (node1 == node2) /* count unique node in a looped list */
	{
		node1 = head;
		while (node1 != node2)
		{
			nodes++;
			node1 = node1->next;
			node2 = node2->next;
		}
		node1 = node1->next;
		while (node1 != node2)
		{
			nodes++;
			node1 = node1->next;
		}
		return (nodes);
	}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = check_looped_listint(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
