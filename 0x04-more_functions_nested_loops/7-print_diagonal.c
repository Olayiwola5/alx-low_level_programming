#include "main.h"
/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
