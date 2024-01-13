#include "main.h"

/**
 * main - Prints the multiplication of two numbers
 *
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mulx = 0, muly = 0;

	if (argc == 3)
	{
		mulx = atoi(argv[1]);
		muly = atoi(argv[2]);
		printf("%d\n", mulx * muly);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
