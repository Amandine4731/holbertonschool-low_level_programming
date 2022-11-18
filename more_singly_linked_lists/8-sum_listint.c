#include "lists.h"
/**
 * sum_listint - sum all the data of a list
 * @head: pointer
 * Return:
 */
int sum_listint(listint_t *head)
{
	unsigned int resultat = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		resultat += head->n;
		head = head->next;
	}
	return (resultat);
}
