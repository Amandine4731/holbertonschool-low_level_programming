#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the first node
 * @index: the index of the node, start at 0
 * Return: 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *temp;
	int n = 0;



	temp = head;
	while (temp->n != n)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		return (-1);
	}
	else if (temp->next->next == NULL)
	{
		temp->next = NULL;
		return (-1);
	}
	else
	{
		p = temp->next;
		temp->next = p->next;
		p->next->prev = temp;
		free(p);
		return (-1);
	}
	return (1);
}  
