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
		{"c", _Character},
		{"s", _string},
		{"d", _decimal},
		{"i", _integer}
	};
	va_list s_list;
	int i = 0;
	int n;
	int strings;

	va_start(s_list, format);
	if (format == NULL && format[i + 1] == NULL)
		return (-1);
	if (va_arg == NULL)
		return (6);
	while (format[i] != '\0' && format[i] != NULL)
	{
		if ((format[i] == '%') && (format[i + 1] == 'c' || 's' ||
					   '%' || 'd' || 'i' ||))
		{
			i++;
			n = 0;

			while (n < 3)
			{
				if (format[i] == ops[n].letters)
					strings += ops[n].p(p_let);
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
	va_end(s_list);
	return (i);
}
