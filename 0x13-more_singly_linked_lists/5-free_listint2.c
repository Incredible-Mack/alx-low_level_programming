#include "lists.h"
/**
 * free_listint2 - linked list free more
 * @head : list
 * Return: function returning void
 * variable t reps temp value
 */
void free_listint2(listint_t **head)
{
listint_t *t;

if (head == NULL)
return;

while (*head)
{
t = *head;
*head = (*head)->next;
free(t);
}
head = NULL;
}
