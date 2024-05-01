#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	long num = 612852475143;
	long i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	if (num > 2)
	{
	printf("%ld\n", num);
	}
	return (0);
}
