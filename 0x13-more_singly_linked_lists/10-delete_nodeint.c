#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the linked list
 * @index: index to delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *new;

	new = *head;
	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp =  temp->next;
		i++;
	}
	return (-1);
}
