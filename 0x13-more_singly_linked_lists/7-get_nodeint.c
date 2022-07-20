#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the linked list
 * @index: index of the node
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
