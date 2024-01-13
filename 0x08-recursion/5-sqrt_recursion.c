#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number of square root
 *
 * Return: The natural square root of the number, or
 * -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}
/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 *
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of the number, or
 * -1 if it does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid && mid == n)
			return (mid);
		if (mid && mid)
			return (sqrt_helper(n, mid + 1, end));
		return (sqrt_helper(n, start, mid - 1));
	}
	return (end);
}
