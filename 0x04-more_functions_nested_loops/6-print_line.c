#include "main.h"

/**
 * print_line - Print a straight line in the terminal
 * @n: n is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
		i++;
	}
		_putchar('\n');
}
