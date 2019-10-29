#include "holberton.h"
/**
 * _printf - funtion to print
 *
 * @format: arguments
 *
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
	p_let ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"d", op_decimal},
		{"i", op_integer}
                {NULL,NULL}
	};
        va_list list;
	int i = 0, n;
	int strings;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while ((format[i] != '\0') && (!format[i]))
	{
		if (format[i] == '%' && format[(i + 1)] == '\0')
		{
			n = 0;
			while (ops[n].letters != NULL)
			{
				if (format[(i + 1)] == ops[n].letters[0])
					ops[n].f(list);
				n++;
			}
		}
		else
		{
			_putchar(format[i]);
			strings++;
		}
	}
	write(1, format, i);
	va_end(list);
	return (i);
}
