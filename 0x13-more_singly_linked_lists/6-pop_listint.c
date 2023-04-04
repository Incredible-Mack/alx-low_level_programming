#include "lists.h"
/**
 * pop_listint - remove the head node
 * @head : pointer to linked list head node
 * Return:  if the linked list is empty return 0 / return head node data(n)
 *
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;
t = *head;

if (t == NULL)
return (0);

*head = t->next;
n = t->n;
free(t);
return (n);
}

