#include "main.h"
/**
  * main - Write a program that prints the numbers from 1 to 100,
  * followed by a new line.
  * But for multiples of three print Fizz instead of the number
  * and for the multiples of five print Buzz.
  * For numbers which are multiples of both three and five print FizzBuzz
  *
  * Return: 0 (success)
  * Return:
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');
	return (0);
}