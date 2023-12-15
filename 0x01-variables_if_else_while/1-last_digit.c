#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, dig;

	dig = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dig);
	}
	else if (dig < 6 && dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, dig);
	}
	return (0);
}
