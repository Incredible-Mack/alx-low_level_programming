#include "main.h"

/**
 * flip_bits - this functions counts number of bits to change
 * @n: unsigned long first int number
 * @m: unsigned long second int number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int a = 0;
	unsigned long int pos;
	unsigned long int xor = n ^ m;

	for (i = 33; i >= 0; i--)
	{
		pos = xor >> i;
		if (pos & 1)
			a++;
	}

	return (a);
}
