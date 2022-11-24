#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the first node
 * @index: the index of the node, start at 0
 * Return: 1 on success -1 in failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;

	if (*head == NULL || index == 0)
		return (-1);

	if ((*head)->n == (int)index)
	{
		p = (*head);
		(*head) = (*head)->next;
		free(p);
	}
		return (1);
}
