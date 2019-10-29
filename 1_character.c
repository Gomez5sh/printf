#include "holberton.h"
/**
 * f_ch - function to print char.
 *@list: va_list.
 *
 * Return: Always.
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
