#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _character(va_list list);
int _string(va_list list);
int _strlen_recursion(char *s);

typedef struct argumentos
{
	char p;
	int (*ptr)(va_list);
} p_let;

#endif
