#include "main.h"
/**
  * print_diagonal -  a function that draws a diagonal line on the terminal.
  * @n: forrmal parameter to function
  * Return: NULL
*/
void print_diagonal(int n)
{
	int x; /* position */
	int y; /* space */

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y  = 0; y <= x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(36);
		_putchar('\n');
	}
	_putchar('\n');
}
