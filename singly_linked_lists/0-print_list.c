#include "lists.h"
/**
  * print_list - print all elements of a list
  * @h: a pointer struct
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	i++;
	h = h->next;
	}
	return (i);
}
