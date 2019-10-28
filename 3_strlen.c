#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: char
 * Return: Void.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ((_strlen_recursion(s + 1)) + 1);
	}
	return (0);
}
