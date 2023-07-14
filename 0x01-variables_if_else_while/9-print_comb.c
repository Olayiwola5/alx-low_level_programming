#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints all possible combinations
  * of single-digit numbers.
  * Numbers must be separated by ,, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the putchar function
  *
  * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
