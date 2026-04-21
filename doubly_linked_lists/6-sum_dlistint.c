#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to the head of the list
 *
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
