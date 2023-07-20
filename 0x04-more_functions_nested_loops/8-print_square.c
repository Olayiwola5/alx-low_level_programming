#include "main.h"
/**
  * print_square - Write a function that prints a square, followed by a new line.
  * @size: int size of  squeare
  * Return: NULL
*/
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
