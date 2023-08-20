#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of a list.
* @head: pointer to pointer that points to the head node.
* @index: index of the node to be deleted.
* Return: 1 if it succeeds or else -1.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr_n = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = ptr_n->next;
if (ptr_n->next)
ptr_n->next->prev = NULL;
free(ptr_n);
return (1);
}
while (ptr_n != NULL && i < index)
ptr_n = ptr_n->next;

if (ptr_n == NULL)
return (-1);

if (ptr_n->next)
ptr_n->next->prev = ptr_n->prev;

if (ptr_n->prev)
ptr_n->prev->next = ptr_n->next;

free(ptr_n);
return (1);
}
