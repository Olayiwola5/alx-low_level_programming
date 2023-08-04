#include "main.h"
/**
  * _isupper - Write a function that checks for uppercase character.
  * @c: an int parameter to _isupper
  * Return: 1 if c is upper and 0 if c is lowercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
