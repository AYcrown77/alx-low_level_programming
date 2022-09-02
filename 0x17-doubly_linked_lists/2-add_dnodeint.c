#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head pointer
 * @n: data to be stored in node
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	temp = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!*head)
	{
		*head = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
		return (newnode);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	temp->prev = newnode;

	return (newnode);
}
