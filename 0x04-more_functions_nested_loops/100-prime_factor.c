#include <math.h>
#include <stdio.h>
/**
  * main - Write a program that finds and prints the largest
  * prime factor of the number 612852475143, followed by a new line.
  * Return: 0 (sucess)
*/
int main(void)
{
	int prime_number;
	long num = 612852475143;

	for (prime_number = (int) sqrt(num); prime_number > 2; prime_number++)
	{
		if (num % prime_number == 0)
		{
			printf("%d\n", prime_number);
			break;
		}
	}

	return (0);
}
