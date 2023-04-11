#include "main.h"

/**
* print_binary -  this function prints the binary representation of a number
* @n: stores the binary number
* Return: void
*/
void print_binary(unsigned long int n)
{
	int a;
	int num = 0;
	unsigned long int pos;

	for (a = 33; a >= 0; i--)
	{
		pos = n >> a;

		if ((pos & 1) == 1)
		{
			_putchar('1');
			num++;
		}
		else if (num != 0)
			_putchar('0');
	}
	if (num == 0)
		_putchar('0');
}

