#include "main.h"

/**
* print_binary - A function that prints the binary representation
* of a number.
* @n: The number to be printed in binary.
*/

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int leading_zeros = 1;

while (mask > 0)
{
if ((n & mask) != 0)
{
leading_zeros = 0;
_putchar('1');
}
else if (!leading_zeros)
{
_putchar('0');
}
mask >>= 1;
}

if (leading_zeros)
_putchar('0');
}
