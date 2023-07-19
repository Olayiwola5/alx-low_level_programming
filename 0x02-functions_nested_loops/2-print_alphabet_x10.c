#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints 10 times the alphabet,
  * in lowercase, followed by a new x.
  *
  * Return: 0 (success)
*/
void print_alphabet_x10(void)
{
	int x, ch;

	for (x = 0; x <= 9; ++x)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
