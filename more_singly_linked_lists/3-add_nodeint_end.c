#include "lists.h"
/**
 * add_nodeint_end - to add a new node at the end of a list
 * @head: the first node
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *temp;

	temp = *head;

	p = malloc(sizeof(listint_t));
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
