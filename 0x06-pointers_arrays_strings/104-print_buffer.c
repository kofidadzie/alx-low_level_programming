#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, a;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (a = 0; a < 10; a++)
		{
			if (a < y)
				printf("%02x", *(b + x + a));
			else
				printf("  ");
			if (a % 2)
			{
				printf(" ");
			}
		}
		for (a = 0; a < j; a++)
		{
			int c = *(b + x + a);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}

