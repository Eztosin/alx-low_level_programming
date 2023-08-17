#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t
* @h: pointer to first node in list
* Return: Number of nodes in list
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr_n;
size_t count = 0;

ptr_n = h;

while (ptr_n != NULL)
{
ptr_n = ptr_n->next;
count++;
}

return (count);
}
