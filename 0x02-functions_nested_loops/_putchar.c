#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charater c to stdout
 * @c: the charater to print
 *
 * Return:On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
