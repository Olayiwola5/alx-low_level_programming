#include <stdio.h>
/**
  * main - Entry point
  * written by Olayiwola
  *
  * Description - Write a program that prints
  * all possible different combinations
  * of three digits.Numbers must be separated by ,, followed by a space
  * The three digits must be different
  * 012, 120, 102, 021, 201, 210 are considered
  * the same combination
  * of the three digits 0, 1 and 2
  * Print only the smallest combination of three digits
  *
  * Return: 0 (success)
*/
int main(void)
{
	int digit1 = 0;
	int digit2, digit3;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				if (digit1 != digit2 &&
				    digit1 < digit2 &&
				    digit2 != digit3 &&
				    digit2 < digit3)
				{
					putchar(digit1 + 48);
					putchar(digit2 + 48);
					putchar(digit3 + 48);

					if (digit1 + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++digit3;
			}
			++digit2;
		}
		++digit1;
	}
	putchar('\n');

	return (0);
}
