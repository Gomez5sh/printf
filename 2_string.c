#include "holberton.h"

int _string(va_list list)
{
	char *string;
	int y, lenght;

	string = va_arg(list ,char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	lenght = _strlen_recursion(string);
	for (y = 0; y < length; i++)
	{
		_putchar(string[y]);
	}
	return (length);
}
