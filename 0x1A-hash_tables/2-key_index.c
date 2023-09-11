#include "hash_tables.h"

/**
* key_index - gives the index of a key in a hash table.
* @key: is the key index to be calculated
* @size: size of the array of the hash table
* Return: the index where key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
unsigned long int new_index;

new_index = hash % size;

return (new_index);
}
