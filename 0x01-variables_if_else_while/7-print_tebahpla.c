#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints the lowercase alphabet
  * in reverse, followed by a new line.
  * You can only use the putchar function
  *
  * Return: 0 (success)
*/
int main(void)
{
	int ch;
	int i;

	ch = 'z';
	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
