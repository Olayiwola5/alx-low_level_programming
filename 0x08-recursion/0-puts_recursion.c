#include "main.h"
/**
  * _puts_recursion - Write a function that prints a string,
  * followed by a new line.
  *@s: str var
  * Return: void
  */
void _puts_recursion(char *s)
{
	char *ptr;

	ptr = s;
	if (*ptr == '\0')
		return;
	putchar(*p);
	_puts_recursion(*p + 1);
}

