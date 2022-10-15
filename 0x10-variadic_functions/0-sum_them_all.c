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
	 va_list nums;

	unsigned int index = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (idex = 0; index < n; index++)
	{
		sum = sum + va_arg(nums, int);
	}`
	va_end(nums);
	return (sum);
}
