#include "lists.h"

/**
* free_listint2 - A function that frees list_t.
* @head: pointer to the first node(double pointer).
* Return: Nothing.
*/

void free_listint2(listint_t **head)
{
listint_t *ch;
listint_t *newptr;

if (head == NULL)
return;

ch = *head;
while (ch != NULL)
{
newptr = ch->next;
free(ch);
ch = newptr;
}
*head = NULL;
return;
}
