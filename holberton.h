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
 * pr_input
 * @p: Pointer
 */

typedef struct pr_input
{
  char *leters;
  void (*p)(va_list);
} p_let;

#endif
