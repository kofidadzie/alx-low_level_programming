#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string containing the binary number
 * Return: converted digit
 */

unsigned int binary_to_uint(cont char *b)
{
	int a;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
}
