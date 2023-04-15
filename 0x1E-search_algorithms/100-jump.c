#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: the array to search the value from
 * @size: the size of the array
 * @value: the value to search for in the array
 *
 * Return: index of the value if found and -1 if not found
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, step, start, end, right;

	if (!array)
		return (-1);

	step = sqrt(size);
	left = 0;
	right = step;

	while(right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left = right;
		right = right + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	start = left - step;
	end = left < size ? left : size;

	for (; start <= end; start++)
	
	{
		printf("Value hhh checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
