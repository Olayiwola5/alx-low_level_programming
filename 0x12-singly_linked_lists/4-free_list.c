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
	list_t *temp; // declare a temporary pointer to store the next node
	while (head != NULL) // loop through the list until the end
	{
		temp = head->next; // store the next node in temp
		free(head->str); // free the string stored in the current node
		free(head); // free the current node
		head = temp; // move the head pointer to the next node
	}
}
