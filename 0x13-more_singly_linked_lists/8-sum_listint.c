#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculating the sum of data in a linked lists
 * @head : pointer
 * Return:  if the list is empty, return 0 / addition of all data
 *
 */
int sum_listint(listint_t *head)
{
int addition;

addition = 0;

while (head)
{
addition += head->n;
head = head->next;
}
return (addition);
}

