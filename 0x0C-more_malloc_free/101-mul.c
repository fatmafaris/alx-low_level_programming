#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - convert string to integer
 *
 * @s: char type string
 *
 * Return: integer converted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int response = 0, firstnum, i;

	for (firstnum = 0; !(s[firstnum] >= '0' && s[firstnum] <= '9'); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstnum; s[i] >= '0' && s[i] <= '9'; i++)
	{
		response *= 10;
		response += (s[i] - '0');
	}
	return (sign * response);
}
/**
 * print_int - prints integer
 *
 * @n: int
 *
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, response;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		response = n / divisor;
		_putchar('0' + response);
	}
}
/**
 * main - print the result of multiplication
 *
 * @argc: integer
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
