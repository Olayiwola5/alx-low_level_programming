#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints the 9 times table, starting with 0. 
  *
  * Return: 0 (success)
*/
void times_table(void)
{
	int number, multiplication, product;

	for (number = 0; number <= 9; ++number)
	{
		_putchar(48);
		for (multiplication = 1; multiplication <= 9; ++multiplication)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplication;

			/*
			 * put space if productuct is a single numberber
			 * place the first digit if its two numberbers
			*/
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48); /*get the first digit*/

			_putchar((product % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
