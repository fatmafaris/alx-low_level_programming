#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int single_digit_num = 0;

	while (single_digit_num < 10)
	{
		putchar(single_digit_num + '0');
		single_digit_num++;
		if (single_digit_num == 9)
		{
			putchar(single_digit_num + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
