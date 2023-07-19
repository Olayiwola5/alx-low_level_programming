#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Illustration
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int index, mult, product;

	for (index = 0; index <= 9; ++index)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			product = index * mult;

			/*
			 * put space if productuct is a single indexber
			 * place the first digit if its two indexbers
			*/
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48); /*get the first digit*/

			_putchar((product % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
