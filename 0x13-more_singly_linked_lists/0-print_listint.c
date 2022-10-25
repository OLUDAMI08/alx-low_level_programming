#include "lists.h"

/**
 * print_listint - print all the element of the linked list
 *
 * @h: pointer to the 1st node of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node;

	while (h)
	{
		printf("%d", h->next);
		nodes++;
		h = h->next;
	}
	return (node);
}
