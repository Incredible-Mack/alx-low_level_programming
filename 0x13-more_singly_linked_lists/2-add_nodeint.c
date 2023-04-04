#include "lists.h"

/**
 * add_nodeint - adding a node at the beginning of  the  linked list
 * @head: pointer at the head of the list
 * @n: int to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}


