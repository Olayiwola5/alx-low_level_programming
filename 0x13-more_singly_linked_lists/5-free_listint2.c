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

        do
        {
                del_node = *head;
                *head = (*head)->next;
                free(del_node);
        } 
	while (*head);
	*head = NULL;
}
