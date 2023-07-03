#include <stdio.h>
#include "lists.h"
/**
* print_list - A function that prints all elements of a list_t list.
* @h: pointer to list head.
* Return: Number of elements counted.
*/

size_t print_list(const list_t *h)
{
const list_t *ch;
size_t count = 1;
if (h == NULL)
{
return (count);
}
ch = h;
while (ch->next != NULL)
{
if (ch->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%u] %s\n", ch->len, ch->str);
ch = ch->next;
count = count + 1;
}
printf("[%u] %s\n", ch->len, ch->str);
return (count);
}
