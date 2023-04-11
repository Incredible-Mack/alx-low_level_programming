#include "main.h"

/**
* get_bit - this function returns d value of a bit using the index position
* @n: the integer used 
* @index: index
* Return: returns value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 23)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);

	return (-1);
}

