#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int f_ch(va_list list);
int f_str(va_list list);
int _strlen_recursion(char *s);
int f_int(va_list list);
int f_oct(va_list list);
int f_hex(va_list list);
int f_base(unsigned int number, int base);
int convert_num(va_list list, int base);

/**
 * struct argumentos - Typedef
 *@p: char
 *@ptr: pointer
 *
 */

typedef struct argumentos
{
	char p;
	int (*ptr)(va_list);
} p_let;

#endif
