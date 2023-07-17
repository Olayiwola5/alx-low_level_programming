#include <stdio.h>
#include <ctype.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description -  a program that prints the alphabet in lowercase,
  * followed by a new line.
  * Print all the letters except q and e
  *
  * Return: 0 (success)
*/
int main(void)
{
	int ch;

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(tolower(ch));
		ch++;
		if (ch == 'Q' || ch == 'E')
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
