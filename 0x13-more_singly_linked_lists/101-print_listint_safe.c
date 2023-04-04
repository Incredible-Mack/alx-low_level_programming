#include "lists.h"

/**
 * free_listp - frees list...
 * @head: head of a list.....
 *
 * Return: void...
 */
void free_listp(listp_t **head)
{
	listp_t *t;
	listp_t *cdata;

	if (head != NULL)
	{
		cdata = *head;
		while ((t = cdata) != NULL)
		{
			cdata = cdata->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - display linked list.
 * @head: head....
 *
 * Return: total numbers of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodedatahead = 0;
	listp_t *mactr, *newvalue, *sumdata;

	mactr = NULL;
	while (head != NULL)
	{
		newvalue = malloc(sizeof(listp_t));

		if (newvalue == NULL)
			exit(98);

		newvalue->p = (void *)head;
		newvalue->next = mactr;
		mactr = newvalue;

		sumdata = mactr;

		while (sumdata->next != NULL)
		{
			sumdata = sumdata->next;
			if (head == sumdata->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&mactr);
				return (nodedatahead);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodedatahead++;
	}

	free_listp(&mactr);
	return (nodedatahead);
}
