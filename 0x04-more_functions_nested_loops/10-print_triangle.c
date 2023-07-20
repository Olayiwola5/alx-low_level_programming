#include "main.h"
#include "_putchar.c"
/**
  * print_triangle - Write a function that prints a triangle, followed by a new line.
  * @size: argument to functioN
  * Return: NULL
*/
void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
int main(void)
{
	int n;

	n = 10;
	print_triangle(n);

	return (0);
}
