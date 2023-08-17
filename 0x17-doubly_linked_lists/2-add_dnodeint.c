#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t
* @head: pointer to a pointer to the head of the list.
* @n: Value to be added to the new node.
* Return: pointer to the new node.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *ptr_n;

ptr_n = malloc(sizeof(dlistint_t));
if (ptr_n == NULL)
{
return (NULL);
}

ptr_n->n = n;
ptr_n->prev = NULL;
ptr_n->next = *head;

if (*head != NULL)
{
(*head)->prev = ptr_n;
}
*head = ptr_n;

return (ptr_n);
}
