#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: positive and negative value
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d the number is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d the number is negative\n", n);
	}
	else
	{
		printf("%d the number is zero\n", n);
	}
	return (0);
}
