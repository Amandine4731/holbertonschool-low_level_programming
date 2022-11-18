#include "lists.h"
/**
 * get_nodeint_at_index - to return nth node of a list
 * @head: pointer
 * @index: variable unsigned int
 * Return: Null if node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
