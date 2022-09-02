#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a
 * dlistint_t linked list.
 * @head: headnode pointer
 * @index: is the index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
