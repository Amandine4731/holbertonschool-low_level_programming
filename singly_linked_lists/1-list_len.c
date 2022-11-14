#include "lists.h"
/**
  * list_len -  returns the number of elements of a linked list
  * @h: a pointer struct
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
