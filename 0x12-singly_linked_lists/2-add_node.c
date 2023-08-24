#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = i;
	n_node->next = (*head);

	(*head) = n_node;

	return (head);
}
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
