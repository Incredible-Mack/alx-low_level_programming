#include "lists.h"
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t n = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		n += 1;
		cursor = cursor->next;
	}
	return (n);
}

/**
 * print_listint - printing all  elements of a linked list
 * Return: the number of nodes
 */

