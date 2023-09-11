#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table.
* @ht: the hash table to be deleted
*
*/

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *d_node, *temp;

if (ht == NULL)
return;

i = 0;
while (i < ht->size)
{
d_node = ht->array[i];
while (d_node != NULL)
{
temp = d_node->next;
free(d_node->key);
free(d_node->value);
free(d_node);
d_node = temp;
}
i++;
}

free(ht->array);
free(ht);
}
