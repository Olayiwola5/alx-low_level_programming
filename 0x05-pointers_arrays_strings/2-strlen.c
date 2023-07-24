#include "main.h"
/**
  * _strlen - Write a function that returns the length of a string.
  * @s: function argument (array)
  * Return: len
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
