#include "main.h"
#include <unistd.h>

/**
 * _putchar - This will write character c to the stdout
 * @c: Character to be printed
 * Return: On suuccess 1
 * On error, -1 is returned and the error is appropriately set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
