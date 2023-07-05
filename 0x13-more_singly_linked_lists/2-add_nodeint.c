#include "lists.h"
/**
* add_nodeint- A function that adds a new node at the beginning of a
* list_t list.
* @head: points to the pointer that points to list head.
* @n: int to be added.
* Return: new pointer to list head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newptr;
newptr = malloc(sizeof(listint_t));
if (newptr == NULL)
{
return (NULL);
}
newptr->n = n;
if (*head == NULL)
{
newptr->next = NULL;
}
else
{
newptr->next = *head;
}
*head = newptr;
return (newptr);
}
