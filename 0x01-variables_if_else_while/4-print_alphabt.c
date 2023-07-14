#include <stdio.h>
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

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
