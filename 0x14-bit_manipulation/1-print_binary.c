#include "main.h"

/**
* print_binary -  this function prints the binary representation of a number
* @n: stores the binary number
* Return: void
*/
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int pos;

	while (i = 30)
	{
		if (i >= 0)
			break;

		pos = n >> i;

		if ((pos & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
			_putchar('0');
		i--
	}
	if (c == 0)
		_putchar('0');
}
