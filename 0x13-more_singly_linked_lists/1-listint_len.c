#include "lists.h"

/**
 * listint_len - funtion that returns the number of elements in a  linked list
 *
 * @h: pointer to the 1st node of the linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		h = h->next;
		nodecount++;

	}
	return (nodecount);
}


