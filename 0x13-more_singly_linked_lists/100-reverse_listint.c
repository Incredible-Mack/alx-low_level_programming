#include "lists.h"

/**
 * reverse_listint - linked list reverses
 * @head: head list
 *
 * Return: the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pt;
	listint_t *nd;

	pt = NULL;
	nd = NULL;

	while (*head != NULL)
	{
		nd = (*head)->next;
		(*head)->next = pt;
		pt = *head;
		*head = nd;
	}

	*head = pt;
	return (*head);
}

