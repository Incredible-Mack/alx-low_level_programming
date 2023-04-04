#include "lists.h"

/**
 * listint_len - counting the total number of nodes in  linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t tot = 0;

	while (cursor != NULL)
	{
		tot += 1;
		cursor = cursor->next;
	}
	return (tot)
}

