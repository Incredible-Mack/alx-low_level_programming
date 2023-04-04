#include "lists.h"
/**
 * get_nodeint_at_index - finding a given node
 * @head :  linked list pointer
 * @index:  node index
 * Return: if the node does not exist, return NULL / pointer
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t num;

for (num = 0; (num < index) && (head->next); num++)
head = head->next;

if (num < index)
return (NULL);

return (head);
}

