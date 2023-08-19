#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of the list.
* @head: Head node of the dlistint_t list.
* @index: index of the node.
* Return: NULL if node does not exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *ptr_n;
unsigned int i = 0;

ptr_n = head;
while (ptr_n != NULL)
{
if (i == index)
{
return (ptr_n);
}
ptr_n = ptr_n->next;
i++;
}
return (NULL);
}
