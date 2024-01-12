#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 *
 * @str: string will be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
