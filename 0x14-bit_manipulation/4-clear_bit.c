#include "main.h"

/**
* clear_bit - A function that sets the value of a bit to 0 at
* a given index.
* @n: Pointer to the unsigned long int number.
* @index: Index of the bit to clear.
* Return: 1 if it worked, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);
mask = ~mask;
*n = *n & mask;

return (1);
}
