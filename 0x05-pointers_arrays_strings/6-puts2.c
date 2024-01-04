#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 *
 * @str: input string
 *
 * Return: print
 */
void puts2(char *str)
{
	int longf = 0;
	int t = 0;
	char *y = str;
	int f;

	while (*y != '\0')
	{
		y++;
		longf++;
	}
	t = longf - 1;
	for (f = 0; f <= t; f++)
	{
		if (f % 2 == 0)
		{
			_putchar(str[f]);
		}
	}
	_putchar('\n');
}
