#include "lists.h"
/**
 * add_dnodeint_end - to add a new node at the end of a list
 * @head: the first node
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *temp;

	temp = *head;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		return (NULL);
	}

	p->n = n;
	p->next = NULL;

	if (*head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;
	}
	else
	{
		*head = p;
	}
	return (p);
}
