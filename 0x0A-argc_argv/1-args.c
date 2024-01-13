#include "main.h"

/**
 * main - Prints the number of arguments
 *
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc += -1;
	printf("%d\n", argc);

	return (0);
}
