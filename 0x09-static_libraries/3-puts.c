#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */
void _puts(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
