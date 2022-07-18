#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head address
 * @str: pointer to the string passed as argument
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (head == NULL && str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
