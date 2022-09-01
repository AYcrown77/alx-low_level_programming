#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new;

	if (head == NULL)
		return;
	new = *head;
	while (new != NULL)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	free(new);
	*head = NULL;
}
