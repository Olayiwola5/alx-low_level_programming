#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a program that prints
  * all possible different combinations of two digits.
  * Numbers must be separated by ,, followed by a space
  *  The two digits must be different
  * 01 and 10 are considered the same combination of the two digits 0 and 1
  * Print only the smallest combination of two digits
  * Numbers should be printed in ascending order,
  * with two digits
  * You can only use the putchar function (
  * every other function (printf, puts, etc…) is forbidden)
  * You can only use putchar five times maximum in your code
  *
  * Return: 0 (success)
*/
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (y < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
