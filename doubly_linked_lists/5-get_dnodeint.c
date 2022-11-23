#include "lists.h"
/**
 * get_dnodeint_at_index - to return nth node of a list
 * @head: pointer
 * @index: the index of the node, starting at 0
 * Return: Null if node does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
