#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list mynums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(mynums, n);
	for (count = 0; count < n; count++)
		sum += va_arg(mynums, int);
	va_end(my_nums);
	return (sum);
}
