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
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++digit2;
		}
		++digit1;
	}
	putchar('\n');

	return (0);
}
