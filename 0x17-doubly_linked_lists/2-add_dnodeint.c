#include "lists.h"

/**
 * add_dnodeint - add node at the begginning of list
 * @head: head node of the linked list
 * @n: integer to add to the list
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return NULL;

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = 0;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;
	
	return(newnode);
}
