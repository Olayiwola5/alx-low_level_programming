#include "main.h"
/**
  * _print_rev_recursion - Write a function that prints a string,
  * followed by a new line.
  *@s: str var
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

