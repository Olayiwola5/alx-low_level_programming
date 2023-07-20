#include "main.h"
/**
  * print_numbers - Write a function that prints the numbers, from 0 to 9,
  * followed by a new line.
  * Return: NULL
*/
void print_numbers(void)
{
	int ch;

	ch = 48;
	while (ch <= 58)
		_putchar(ch);
	_putchar('\n');
}
