#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower_case, upper_case;

	lower_case = 'a';
	upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar("\n");
	return (0);
}
