#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * type struct - structure.
 * @pr_input: structur name.
 * @letters: pointer.
 * @p: pointer.
 *
 **/
typedef struct pr_input
{
	char *letters;
	int (*f)();
} p_let;


int _printf(const char *format, ...);
int op_character(va_list list);
int op_string(va_list list);
int op_strlen_recursion(char *s);
int _putchar(char c);
#endif
