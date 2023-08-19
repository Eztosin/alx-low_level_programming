#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to the head node.
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr_n, *ptr;

ptr_n = head;
while (ptr_n != NULL)
{
ptr = ptr_n->next;
free(ptr_n);
ptr_n = ptr;
}
}
