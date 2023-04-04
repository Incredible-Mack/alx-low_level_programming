#include "lists.h"
/**
 * insert_nodeint_at_index - adding node in a giving position
 *
 * @head : pointer
 * @idx    : is the index of the list where the new node should be added. Index starts at 0
 * @n        : value to be add to new node / t represent temp....
 * Return:  null when function fails
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *data, *t = *head;
unsigned int node;

data = malloc(sizeof(listint_t));

if (data == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
data->next = t;
*head = data;
return (data);
}

for (node = 0; node < (idx - 1); node++)
{
if (t == NULL || t->next == NULL)
return (NULL);

t = t->next;
}

data->next = t->next;
t->next = data;

return (data);
}

