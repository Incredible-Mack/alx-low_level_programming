#include "lists.h"
/**
 * find_listint_loop - loop contained in a linked list
 * @head : pointer ....
 * Return: if there is no loop-NUll.....
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nodehead1, *nodehead;

if (head == NULL || head->next == NULL)
return (NULL);

nodehead1 = head->next;
nodehead = (head->next)->next;

while (nodehead)
{
if (nodehead1 == nodehead)
{
nodehead1 = head;

while (nodehead1 != nodehead)
{
nodehead1 = nodehead1->next;
nodehead = nodehead->next;
}

return (nodehead1);
}

nodehead1 = nodehead1->next;
nodehead = (nodehead->next)->next;
}

return (NULL);
}

