#include "main.h"

/**
* binary_to_uint - convert binary number to unsigned int
* @b: a string of binary numbers
* Return: after conversion returns the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, n = 0;

	if (!b)
		return (0);

	while (b[a])
	{
		if (b[a] == '0' || b[a] == '1')
		{
			n <<= 1;
			n += b[a] - '0';
			a++;
		}
		else
			return (0);
	}
	return (n);
}

