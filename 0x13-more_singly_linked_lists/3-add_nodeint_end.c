#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *temp;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
	{
		last->n = n;
		last->next = NULL;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		last->n = n;
		last->next = *head;
		*head = last;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	temp->next = last;
	/* update head */
	*head = last;

	return (last);
}
