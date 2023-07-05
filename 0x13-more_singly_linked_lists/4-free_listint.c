#include "lists.h"

/**
* free_listint - A function that frees listint_t.
* @head: pointer to the first node.
* Return: Nothing.
*/

void free_listint(listint_t *head)
{
listint_t *ch;
listint_t *newptr;

ch = head;
while (ch != NULL)
{
newptr = ch->next;
free(ch);

ch = newptr;
}
return;
}
