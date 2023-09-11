#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table to be printed
*
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current;
int print_value = 0;

if (ht == NULL)
return;

i = 0;

printf("{");
while (i < ht->size)
{
current = ht->array[i];
while (current != NULL)
{

if (print_value)
printf(", ");
printf("'%s': ", current->key);
printf("'%s'", current->value);
current = current->next;
print_value = 1;
}
i++;
}
printf("}\n");
}
