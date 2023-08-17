#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of the list.
* @head: pointer to a pointer to the head node.
* @n: value to be added to the new node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr_n, *trsv;
ptr_n = malloc(sizeof(dlistint_t));
if (ptr_n == NULL)
{
return (NULL);
}
ptr_n->n = n;
ptr_n->next = NULL;

if(*head == NULL)
{
ptr_n->prev = NULL;
(*head) = ptr_n;
return (ptr_n);
}

trsv = *head;
while (trsv->next != NULL)
{
trsv = trsv->next;
}
trsv->next = ptr_n;
ptr_n->prev = trsv;

return (ptr_n);
}
