#include "main.h"
/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
