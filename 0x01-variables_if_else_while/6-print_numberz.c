#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints all single digit
  * numbers of base 10 starting from 0, followed by a new line
  * You are not allowed to use any variable of type char
  *
  * Return: 0 (success)
*/
int main(void)
{
	int ch;

	ch = 48;
	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
