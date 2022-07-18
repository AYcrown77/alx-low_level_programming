#include "lists.h"

/**
 * add_node_end -  function that adds a new node
 * at the end of a list_t list
 * @head: pointer to the address of linked list
 * @str: pointer to the string passed as argument
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
