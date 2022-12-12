#include "lists.h"

/**
 * free_dlistint - function to free up a list
 *
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
