#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. 
  *
  * Return: 0 (success)
*/
void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;
	minute = 0;
	while (hour <= 23)
	{
		while (minute <= 59)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(58);
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
