#include "main.h"
/**
  * print_number - Write a function that prints an integer.
  * Prototype: void print_number(int n);
  * You can only use _putchar function to print
  * @n: int parameter
  * Return: NULL
*/
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 > 9)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
