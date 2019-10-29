#include "holberton.h"

/**
 * string - funtion name
 * @list: variable
 *
 * Return: length
 */

int op_string(va_list list)
{
	char *string;
	int y, l;

	string = va_arg(list ,char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	l = op_strlen_recursion(string);
	for (y = 0; y < l; y++)
	{
		_putchar(string[y]);
	}
	return (1);
}
