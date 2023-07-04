#include "lists.h"

/**
* add_node_end- A function that adds a new node at the end of a
* list_t list.
* @head: points to the pointer that points to list head.
* @str: string of characters.
* Return: new pointer to list head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *ch;
list_t *newptr;
newptr = malloc(sizeof(list_t));
if (newptr == NULL)
{
return (NULL);
}
newptr->str = strdup(str);
if (newptr->str == NULL)
{
free(newptr);
return (NULL);
}
newptr->len = strlen(str);
newptr->next = NULL;
if (*head == NULL)
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
