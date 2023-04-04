#include "lists.h"

/**
 * add_nodeint_end - adding  node at the end of a linked list
 * @head: head of the list
 * @n: num used as content
 *
 * Return: the newly added node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *cursor = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}

