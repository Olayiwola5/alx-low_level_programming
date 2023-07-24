#include "main.h"
/**
  * puts_half - Write a function that prints half of a string,
  * followed by a new line.
  * @str: string argument to function
  * Return: NULL
*/
void puts_half(char *str)
{
	int length;
	int n;
	int i;

	len = strlen(str);
	n = (length % 2 == 0) ? length / 2 : (length - 1) / 2;
	for (i = n; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
