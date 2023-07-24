#include "main.h"
/**
  * puts2 - Write a function that prints every other character of a string,
  * starting with the first character, followed by a new line
  *@str: char argument to the function
  * Return: NULL
*/
void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(str + i) != '\0')
	{
		++len;
	}
	while (i < len)
	{
		_putchar(*(str + i);
		i = i + 2;
	}
	_putchar('\n');

}
