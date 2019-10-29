#include "holberton.h"
/**
 * f_str - check the code for Holberton School students.
 *@list: va_list
 *
 * Return: Always.
 */

int f_str(va_list list)
{
	char *string;
	unsigned int y, l;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";

	l = _strlen_recursion(string);
	for (y = 0; y < l; y++)
	{
		_putchar(string[y]);
	}
	return (l);
}
