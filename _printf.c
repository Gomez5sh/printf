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

		{'c', _character},
		{'s', _string},
		{'\0', NULL}
	};

	int x = 0, y = 0, z = 0;
	va_list list;

	if (!format)
	{
		return (-1);
	}
	va_start(list, format);

	if (x == 0 && format[x + 1] == '\0')
		return (-1);

	while (format[x] != '\0')
	{
		if (format[x] != '%')
		{
		 	while (array[y].p != '\0')
			{
				if (array[y].p == format[x + 1])
				{
					z += array[y].ptr(list);
					x++;
					break;
				}
				y++;
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
		x++;
	}
	va_end(list);
	return (z);

}
