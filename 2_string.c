#include "holberton.h"

int _string(va_list list)
{
	char *string;
	int y, l;

	string = va_arg(list ,char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	l = _strlen_recursion(string);
	for (y = 0; y < l; y++)
	{
		_putchar(string[y]);
	}
	return (l);
}
