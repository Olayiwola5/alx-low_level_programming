#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
  * main - Entry point
  *
  * Description - a program that prints the alphabet in lowercase,
  * and then in uppercase,
  * followed by a new line.
  *
  * written by Olayiwola5
  *
  * Return: 0 (success)
*/
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(toupper(ch));
		ch++;
	}
	putchar('\n');
	return (0);
}
