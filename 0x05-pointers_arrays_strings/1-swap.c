#include <stdio.h>
#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: a pointer dereference for changing the value of the variable a
 * @b: a pointer deference for changing the value of the variable b
 * Return 0 success.
*/

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = a;
}
