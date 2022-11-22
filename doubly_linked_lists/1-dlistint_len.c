#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked list
 * @h: a pointer struct
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
