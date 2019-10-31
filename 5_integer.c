#include "holberton.h"

/**
 * f_int - print integers
 *@list: argument entered to print
 *
 * Return: always
 */
int f_int(va_list list)
{
	unsigned int len;

	len = convert_num(list, 10);
	return (len);
}

/**
 * f_oct - print integers
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
 * f_hex - print integers
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
 * f_base - print integers
 *@list: argument entered to print
 *@base: the base of the number
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
 * convert_num - convert all the numbers
 *@list: argument entered to print
 *@base: base
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
