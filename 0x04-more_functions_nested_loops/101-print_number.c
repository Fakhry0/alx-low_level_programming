#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == INT_MIN)
	{
		print_number(INT_MIN / 10);
		_putchar('8');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
