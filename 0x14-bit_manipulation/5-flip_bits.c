#include "main.h"

/**
* flip_bits - A function that returns the number of bits needed
* to flip to get from one number to another.
* @n: The first number.
* @m: The second number.
* Return: The number of bits needed to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dif = n ^ m;
unsigned int count = 0;

while (dif != 0)
{
count = count + (dif & 1);
dif >>= 1;
}
return (count);
}
