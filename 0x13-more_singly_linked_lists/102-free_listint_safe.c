#include "lists.h"

/**
 * free_listp2 - frees list
 * @head: list head
 *
 * Return: void.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - free....
 * @h: head...
 *
 * Return: returning size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodedatavalue = 0;
	listp_t *mactr, *newvalue, *sumdata;
	listint_t *cdata;

	mactr = NULL;
	while (*h != NULL)
	{
		newvalue = malloc(sizeof(listp_t));

		if (newvalue == NULL)
			exit(98);

		newvalue->p = (void *)*h;
		newvalue->next = mactr;
		mactr = newvalue;

		sumdata = mactr;

		while (sumdata->next != NULL)
		{
			sumdata = sumdata->next;
			if (*h == sumdata->p)
			{
				*h = NULL;
				free_listp2(&mactr);
				return (nodedatavalue);
			}
		}

		cdata = *h;
		*h = (*h)->next;
		free(cdata);
		nodedatavalue++;
	}

	*h = NULL;
	free_listp2(&mactr);
	return (nodedatavalue);
}

