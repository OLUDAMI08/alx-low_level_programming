#include "variadic_fuctions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - getting the sum of the arguments passed
 * @n: first parameter
 * @...: varied numbers of arguments passed 
 * Return: sum on success
 * otherwise: -1 or error set appropriatly
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
