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

/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int f_oct(va_list list)
{
	unsigned int len;

	len = convert_num(list, 8);
	return (len);
}


/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int f_hex(va_list list)
{
	unsigned int len;

	len = convert_num(list, 16);
	return (len);
}

/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int f_base(unsigned int number, int base)
{

	int i = 0;

	while (number / base != 0)
	{
		number /= base;
		i++;
	}
	return (i);
}

/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int convert_num(va_list list, int base)
{

	char low[] = "0123456789abcdef";
	char *mynum;
	unsigned int numc = va_arg(list, unsigned int);
	int len = f_base(numc, base);
	int i = 0;

	mynum = malloc(len +1);

	while (numc/base != 0)
	{
		mynum[--len] = low[numc % base];
		numc = numc / base;
	}
	while (mynum[i] != '\0')
	{
		_putchar(mynum[i++]);
	}
	return(i);

}
