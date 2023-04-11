#include "main.h"

/**
* set_bit - this function sets the value of a bit to 1 using d index pos
* @n: stores the number
* @index: index
* Return: returns 1 (if it worked) -1 (if error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int p;

	if (index > 63)
		return (-1);

	p = 1 << index;

	*n = (*n & ~p) | (1 << index);

	return (1);
}

