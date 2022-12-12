#include "lists.h"

/**
 * print_dlistint - print all the element of a 
 * dlistint
 * @h: head of the list
 * Return: the number of te node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;
	while(temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
