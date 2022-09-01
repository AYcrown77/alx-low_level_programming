#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
