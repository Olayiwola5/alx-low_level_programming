#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal.
  * @n: length of line
  * Return: NULL
*/
void print_line(int n)
{
	int i;

	if  (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}