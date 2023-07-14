#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints the alphabet in lowercase,
  * followed by a new line.
  * written by Olayiwola5
  *
  * Return: 0 (success)
*/
int main(void)
{
	int ch;
	int i;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
