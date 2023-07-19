#include "main.h"
/**
  * main - Entry point 
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints __putchar,
  * followed by a new line.
  *
  * Return: 0 (success)
*/
int main(void)
{
	char string[] = "_putchar";
	int i;

	i = 0; 
	while(string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
