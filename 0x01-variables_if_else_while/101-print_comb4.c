#include <stdio.h>
/**
  * main - Entry point
  * written by Olayiwola
  *
  * Description - Write a program that prints all possible different combinations
  * of three digits.Numbers must be separated by ,, followed by a space
  * The three digits must be different
  * 012, 120, 102, 021, 201, 210 are considered the same combination 
  * of the three digits 0, 1 and 2Print only the smallest combination of three digits
  *
  * Return: 0 (success)
*/
int main(void)
{
	int  x;
	int y;
	int z;

	for (x = 0; x < 99; x++)
	{
		for (y = 0; y < 99; y++)
		{
			for (z = 0; z < 99; z++)
			{
				if (x != y &&
				    x < y &&
				    y != z &&
				    y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if ( z != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
