#include "main.h"
/**
  * puts_half - Write a function that prints half of a string,
  * followed by a new line.
  * @str: string argument to function
  * Return: NULL
*/
void puts_half(char *str)
{
	int len;
	int n;
	int i;

	len = strlen(str);
	n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
