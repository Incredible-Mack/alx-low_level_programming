#include "lists.h"
/**
 * insert_nodeint_at_index - inserting  new node
 * @head : pointer
 * @idx  : is the index of the list
 * @n    : new value
 * Return: address the new node|NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newvalue, *t = *head;
unsigned int node;

newvalue = malloc(sizeof(listint_t));

if (newvalue == NULL)
return (NULL);

newvalue->n = n;

if (idx == 0)
{
newvalue->next = t;
*head = newvalue;
return (newvalue);
}

for (node = 0; node < (idx - 1); node++)
{
if (t == NULL || t->next == NULL)
return (NULL);

t = t->next;
}

newvalue->next = t->next;
t->next = newvalue;

return (newvalue);
}

