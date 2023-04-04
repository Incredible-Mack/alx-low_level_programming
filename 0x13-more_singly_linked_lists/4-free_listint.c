#include "lists.h"

/**
 * free_listint - freeing linked-list
 * @head: head of the list
 *  varible t stands for tempoary
 * Return: returning void back to the fucntion
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}

