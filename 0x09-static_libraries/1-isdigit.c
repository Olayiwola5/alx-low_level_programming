#include "main.h"
/**
  * _isdigit - Write a function that checks for a digit (0 through 9).
  * @c: integer parameter to _isdidgit
  * Return: 1 if c is digit else 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
