#include "main.h"
/**
 * factorial - Write a function that returns the
 * factorial of a given number.
 * @n: int var
 * Return: int var
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	return (n * factorial(n - 1));
}
