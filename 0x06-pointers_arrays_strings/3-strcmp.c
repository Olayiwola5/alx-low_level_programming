#include "main.h"
/**
  * _strcmp - Write a function that compares two strings.
  * @s1: char pointer 1
  * @s2: char pointer 2
  * Return: int, the difference(distance) between pointers
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
