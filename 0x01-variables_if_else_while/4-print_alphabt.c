#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if ((lower_case != 'q' && lower_case != 'e') && lower_case <= 'z')
			putchar(lower_case);
		lower_case++;
	}
	putchar('\n');
	return (0);
}
