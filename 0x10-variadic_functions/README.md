This file contains the concepts of variadic functions.

Variadic functions are functions that take a variable number of
arguments and a re declared with an ellipsis in place of the last
parameter.
The following projects were carried out to implement my learning.

-A function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0.

-A function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned
int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function.