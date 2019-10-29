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

	int n = 0, y, len = 0;
	va_list list;

	va_start(list, format);

	if (!format && format[n] == 0 && format[n + 1] == '\0')
		return (-1); /* condition for not print in case of null */

	while (format[n] != '\0') /*run format in position n */
	{
		n++;

		if (format[n] == '%') /* in case of mod do this: */
		{
			for (y = 0; array[y].p != '\0'; y++) /* run de array in position y */
		{
			if (array[y].p == format[n + 1]) /* if the array in y position in same which format in position n + 1 */
			{
				len += array[y].ptr(list);
				n++;
				break; /*add 1 and this increases, when the loop ends, break the function*/
			}
		}
			if (format[n] == '%' && format[n + 1] == '%') /* if format is equal to mod and format in the n position is equal to mod */
		{
			_putchar('%');
			n++;
			len++;
			break; /* print and increase n an len, net break the funtion */
		}
			if (format[n] == '%' && format[n + 1] == '\0') /* if format in equal to mode in the n position and null en n potion + 1 */
		{
			_putchar('%'); /*if the condition is met print mod */
		}
		}
		else /* else print format in the n position and increase len */
		{
			_putchar(format[n]);
			len++;
		}
	}
	va_end(list);
	return (len);
}
