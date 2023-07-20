#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal.
  * Return: NULL
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
        _putchar('\n');
}
