#include "main.h"
/**
 * print_last_digit - print last digit of an integer
 *  @n: the integer to print the last digit
 *  Return: Value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
