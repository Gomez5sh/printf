#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _printf(const char *format, ...);

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
	void (*p)();
} p_let;



#endif
