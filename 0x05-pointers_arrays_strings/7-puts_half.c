#include "main.h"
/**
  * puts_half - Write a function that prints half of a string,
  * followed by a new line.
  * @str: string argument to function
  * Return: NULL
*/
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		++len;
	}
	i = len / 2;
	if (len % 2 == 1)
	{
		i++;
	}
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
