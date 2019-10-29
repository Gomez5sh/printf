#include "holberton.h"

/**
 * f_ch - funtion character.
 * @list: va list
 * Return: 1.
 */

int f_ch(va_list list)
{
	char i;

	i = va_arg(list, int);
	if (i == 0)
		return (0);
	_putchar(i);
	return (1);
}
