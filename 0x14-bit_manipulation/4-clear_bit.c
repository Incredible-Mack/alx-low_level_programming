#include "main.h"

/**
* clear_bit - this function clears the value of a bit at an index position
* @n: pointer
* @index: index
* Return: returns 1 (if worked) -1 (if error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int p;

	if (index > 33)
		return (-1);

	p = 1 << index;
	*n = (*n & ~p);

	return (1);
}

