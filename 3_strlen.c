#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: char
 * Return: Void.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
