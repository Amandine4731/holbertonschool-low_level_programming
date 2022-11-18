#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer pointer
 * @idx: the position
 * @n: data
 * Return: node or Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *p;

	temp = *head;

	p = malloc(sizeof(listint_t));
	if (p = NULL)
		return (NULL);

	p->n = n;
	p->next = NULL

		while (*head != NULL)
		{
			if (i = idx)
				return (*head);
			i++;
			temp = temp->next;
			temp->next = p;
		}
	else
		*head = p;
	return (p);
}

