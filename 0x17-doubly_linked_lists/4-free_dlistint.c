#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to the head node.
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr_n, *ptr;

current = head;
while (current != NULL)
{
ptr_n = current->next;
free(ptr);
ptr = ptr_n;
}
}
