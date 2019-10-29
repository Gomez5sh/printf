#include "holberton.h"

/**
 * f_str - string function
 * @list: va_list
 * Return: l.
 */

int f_str(va_list list)
{
	char *string;
	unsigned int y, l;

	string = va_arg(list, char*);
	if (string == NULL)
		string = "(null)";

	l = _strlen_recursion(string);
	for (y = 0; y < l; y++)
	{
		_putchar(string[y]);
	}
	return (l);
}
