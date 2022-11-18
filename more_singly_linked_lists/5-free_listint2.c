#include "lists.h"
/**
 * free_listint2 - to free a list
 * @head: pointer pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{

		while ((*head) != NULL)
		{
			temp = (*head)->next;
			free(*head);
			(*head) = NULL;
			(*head) = temp;
		}
	}
}
