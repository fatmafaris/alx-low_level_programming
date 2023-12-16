#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char f;

	f = 'z';

	while (f >= 'a')
	{
		putchar(f);
		f++;
	}
	putchar('\n');

	return (0);
}
