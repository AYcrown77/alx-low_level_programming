#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list.
 * @head: head pointer
 * @n: data to be inserted in the newnode
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;

	return (*head);
}
