#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints the last digit of a 
  *
  * Return: 0 (success)
*/
int print_last_digit(int);
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
