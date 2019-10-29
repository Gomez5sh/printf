#include "holberton.h"

/**

 */

int _character(va_list list)
{
	char i;

	i = va_arg(list, int);

	if (i == 0)
		return (0);
	_putchar(i);

	return (1);
}
