#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 * @head : pointer
 * @index: node to be deleted
 *
 * Return:  1 if it succeeded, -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempory, *cpy = *head;
unsigned int nodehead;

if (cpy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(cpy);
return (1);
}

for (nodehead = 0; nodehead < (index - 1); nodehead++)
{
if (cpy->next == NULL)
return (-1);

cpy = cpy->next;
}

tempory = cpy->next;
cpy->next = tempory->next;
free(tempory);
return (1);
}

