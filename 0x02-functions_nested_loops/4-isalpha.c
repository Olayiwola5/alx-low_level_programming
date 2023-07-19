#include "main.h"
/**
  * main - Entry point 
  *
  * written by Olayiwola
  *
  * Description - Write a function that checks for alphabetic character.
  *
  * Return: 0 (success)
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
