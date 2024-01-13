#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Prints a string
 *
 * @s: string will be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
