#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data
 * @head: A pointer to the head of the listin_t
 * Return: If the list is empty -0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
