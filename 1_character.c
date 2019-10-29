#include "holberton.h"

/**
 * _character - funtion name
 * @list: variable
 *
 * Return: en 1
 */

int op_character(va_list list)
{
	char i;

	i = va_arg(list, int);

	if (i == 0)
		return (0);
	_putchar(i);
	return (1);
}
