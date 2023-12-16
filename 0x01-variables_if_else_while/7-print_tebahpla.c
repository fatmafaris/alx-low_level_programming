#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower_case = 'z';

	while (lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}
	putchar('\n');
	return (0);
}
