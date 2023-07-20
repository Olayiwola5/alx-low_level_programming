#include "main.h"
/**
  * print_most_numbers - Write a function that prints the numbers, from 0 to 9,
  * followed by a new line.
  * Return: NULL
*/
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch == 2 || ch == 4)
		{
			ch++;
		}
		_putchar(ch + 48);
	}
	_putchar('\n');
}
