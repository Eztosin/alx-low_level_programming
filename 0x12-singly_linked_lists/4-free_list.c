#include "lists.h"
/**
* free_list - A function that frees list_t.
* @head: pointer to the first node.
* Return: Nothing.
*/

void free_list(list_t *head)
{
list_t *ch;
list_t *new;
ch = head;
while (ch->next != NULL)
{
new = ch->next;
free(ch->str);
free(ch);
ch = new;
}
return;
}
