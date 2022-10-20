#include "main.h"
/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: Void.
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
