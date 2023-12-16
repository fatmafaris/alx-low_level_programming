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
	char lowercase, uppercase;

	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar("\n");
	return (0);
}
