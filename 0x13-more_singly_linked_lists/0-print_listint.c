#include "lists.h"

/**
 * print_listint - printing  the elements of  linked list
 * @h: head of the list
 *
 * Return: the total  number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t tot = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		tot += 1;
		cursor = cursor->next;
	}
	return (tot);
}

