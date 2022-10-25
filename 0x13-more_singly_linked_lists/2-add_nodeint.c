#include "lists.h"
/**
 * add_nodeint - Adds a new node at the begining.
 * @head: A ponter to the address of head
 * @n: The interger for the new node to contain.
 * Return: If the function fails - Null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
