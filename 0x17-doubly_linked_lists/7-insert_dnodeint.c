#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: pointer to pointer to the head of the node in list.
* @idx: index of the list where new node will be added.
* @n: value of the new node.
* Return: pointer to new node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr_n, *ptr = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

ptr_n = malloc(sizeof(dlistint_t));
if (ptr_n == NULL)
return (NULL);

ptr_n->n = n;

if (idx == 0)
return (add_dnodeint(h, n));

while (ptr != NULL && i < idx - 1)
{
ptr = ptr->next;
i++;
}
if (ptr == NULL)
{
free(ptr_n);
return (NULL);
}

ptr_n->prev = ptr;
ptr_n->next = ptr->next;

if (ptr->next != NULL)
ptr->next->prev = ptr_n;
ptr->next = ptr_n;

return (ptr_n);
}
