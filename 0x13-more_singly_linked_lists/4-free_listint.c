#include "lists.h"

/**
 * free_listint - Freees a listint_t lists
 * @head: A pointer to the head of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
