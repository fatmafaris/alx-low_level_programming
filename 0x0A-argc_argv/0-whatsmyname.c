#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv[0]);

	return (0);
}