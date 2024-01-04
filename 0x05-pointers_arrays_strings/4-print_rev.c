#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int longf = 0;
	int f;

	while (*s != '\0')
	{
		longf++;
		s++;
	}
	s--;
	for (f = longf; f > 0; f--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
