#include "lists.h"

/**
* insert_nodeint_at_index- A function that inserts a node at a
* given position (idx).
* @head: Pointer to first node of linked list.
* @idx: Given position.
* @n: data list
* Return: address of new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newptr;
listint_t *ch;
unsigned int i;
newptr = malloc(sizeof(listint_t));
if (newptr == NULL)
{
return (NULL);
}
newptr->n = n;

if (idx == 0)
{
newptr->next = *head;
*head = newptr;
return (newptr);
}
if (head == NULL)
newptr->next = NULL;
return (NULL);
ch = *head;
for (i = 0; i < idx; i++)
{
if (i == idx - 1)
{
newptr->next = ch->next;
ch->next = newptr;
return (newptr);
}
ch = ch->next;
}
free(newptr);
return (NULL);
}
