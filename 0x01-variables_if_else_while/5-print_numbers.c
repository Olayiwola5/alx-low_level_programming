#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints all single digit
  * numbers of base 10 starting from 0, followed by a new line.
  * All your code should be in the main function
  *
  * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
