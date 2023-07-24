#include "main.h"
/**
  * print_rev - Write a function that prints a string, in reverse,
  * ,followed by a new line.
  * @s: pointer argument
  * Return: NULL
*/
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	--len;
	for (i = len; len >= 0; i--)
	{
		_putchar(s[i]);
		--len;
	}
	_putchar('\n');
}
