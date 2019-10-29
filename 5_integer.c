#include "holberton.h"
/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int f_int(va_list list)
{

	int num, last, n, digit, exp, i;

	n = va_arg(list, int);
	last = n % 10;
	n = n / 10;
	num = n;
	i = 1;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		exp = 1;
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
