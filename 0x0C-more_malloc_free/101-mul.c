#include "main.h"
#include <stdio.h>

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: string to check
 *
 * Return: 1 if str is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: the multiplication result
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
