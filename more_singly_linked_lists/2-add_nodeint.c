#include "lists.h"
/**
  * add_nodeint - to add a new node at the beginning of a linked list
  * @head: the first node
  * @n: numbers
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
