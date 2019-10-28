#include "holberton.h"

/**
 * get_op_func - funtion get
 *
 * @s: pointer char
 *
 * Return: Pointer
 */

int (*get_op_func(char *s))(int, int)
{
	p_let ops[] = {
                 {"%c", op_char},
                 {"%d", op_decimal},
                 {"%s", op_string},
                 {"%i", op_integer},
                 {"\n", op_new_line},
                 {}
                 {NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op[0] != s[0] && i < 4)
    {
      i++;
    }

	return (ops[i].f);
}
