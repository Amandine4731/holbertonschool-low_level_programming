#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: a pointer struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
