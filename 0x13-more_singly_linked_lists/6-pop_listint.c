#include "lists.h"
/**
* pop_listint- A function that deletes the head node of a listint_t
* list.
* @head: pointer to head node.
* Return: head node data.
*/

int pop_listint(listint_t **head)
{
listint_t *newptr;
int x;

if (*head == NULL)
{
return (0);
}
newptr = *head;
x = newptr->n;
*head = newptr->next;
free(newptr);

return (x);
}
