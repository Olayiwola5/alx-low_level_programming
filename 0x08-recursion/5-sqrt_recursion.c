#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_helper_func(int n, int sq);

	int sq = 1;

	return (sqrt_helper_func(n, sq));
}

/**
 * sqrt_helper_func - helper function to solve _sqrt_recursion
 * @sq: number to determine if square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_helper_func(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_helper_func(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
