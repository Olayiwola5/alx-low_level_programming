#include "main.h"
/**
  * print_most_numbers - Write a function that prints the numbers, from 0 to 9,
  * followed by a new line.
  * Return: NULL
*/
void print_most_numbers(void)
{
	int ch;

	ch = 48;
	while (ch <= 58 && ch != 50 && ch != 52)
		_putchar(ch);
	_putchar(ch);
}
