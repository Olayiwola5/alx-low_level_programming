#include <stdio.h>
/**
  * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
  * in lowercase, followed by a new x.
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
