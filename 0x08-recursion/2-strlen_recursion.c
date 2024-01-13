#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
