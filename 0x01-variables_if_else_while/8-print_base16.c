#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int num = 0;
	char lower_case = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (lower_case <= 'f')
	{
		putchar(lower_case);
		lower_case++;
	}
	putchar('\n');
	return (0);
}
