#include "holberton.h"
/**
 * _printf - function that produce putput according to a format.
 *@format: char.
 *
 *
 * Return: Always.
 */

int _printf(const char *format, ...)
{
	p_let array[] = {

		{'c', f_ch},
		{'s', f_str},
		{'d', f_int},
		{'i', f_int},
		{'\0', NULL},
	};

	int x = 0, y, z = 0;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	if (x == 0 && format[x + 1] == '\0')
		return (-1);
	for (; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; array[y].p != '\0'; y++)
			{
				if (array[y].p == format[x + 1])
				{
					z += array[y].ptr(list);
					x++;
					break;
				}
			}
			if (format[x] == '%' && format[x + 1] == '%')
			{
				_putchar('%');
				x++;
				z++;
				break;
			}
			if (format[x] == '%' && format[x + 1] == '\0')
			{
				_putchar('%');
			}
		}
		else
		{
			_putchar(format[x]);
			z++;
		}
	}
	va_end(list);
	return (z);
}
