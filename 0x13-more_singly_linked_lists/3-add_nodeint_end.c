#include "lists.h"

/**
* add_nodeint_end- A function that adds a new node at the end of a
* listint_t list.
* @head: points to the pointer that points to list head.
* @n: int to be added.
* Return: new pointer to list head.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newptr;
listint_t *ch;
newptr = malloc(sizeof(listint_t));
if (newptr == NULL)
{
return (NULL);
}
newptr->n = n;
newptr->next = NULL;
if(*head == NULL)
{
*head = newptr;
}   
else
{
ch = *head;
while (ch->next != NULL)
{
ch = ch->next;
}
ch->next = newptr;
}
return (newptr);
}
