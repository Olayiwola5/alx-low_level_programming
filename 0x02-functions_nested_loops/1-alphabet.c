#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints the alphabet,
  * in lowercase, followed by a new line.
  *
  * Return: 0 (success)
*/
void print_alphabet(void)
{
	int ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
