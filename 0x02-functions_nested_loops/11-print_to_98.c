#include"main.h"

/**
 * print_to_98 - print n to 98 indexs
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int index;

	if (n > 98)
		for (index = n; index > 98; --index)
			printf("%d, ", index);
	else
		for (index = n; index < 98; ++index)
			printf("%d, ", index);
	printf("98\n");
}
