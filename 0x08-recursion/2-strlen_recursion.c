#include "main.h"

/**
  * _strlen_recursion - Write a function that returns the length of a string
  * @s: char pointer
  * Return: int
  */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (s[len] == '\0')
		return;

	len = _strlen_recursion(*s +1 ) +1;
	return len;
}
