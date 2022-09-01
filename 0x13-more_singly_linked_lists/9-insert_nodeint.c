#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: pointer to the linked list
 * @idx: the index of the list where the new node should be added
 * @n: the data to be stored in the node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp, *current;

	temp = *head;
	new =  malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	while (i < idx)
	{
		if (temp)
		{
			current = temp;
			temp = temp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	new->next = temp;
	current->next = new;

	return (new);
}
