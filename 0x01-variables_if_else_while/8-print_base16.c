#include <stdio.h>
/**
  * main - Entry point
  *
  * written by Olayiwola5
  *
  * Description - Write a program that prints all the numbers
  * of base 16 in lowercase, followed by a new line.
  * You can only use the putchar function
  *
  * Return: 0 (success)
*/
int main(void)
{
	int digit;

	digit = 48;
	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
		{
			digit = digit + 39;
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
