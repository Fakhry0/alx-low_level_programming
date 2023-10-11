#include <stdio.h>

/**
 *  * main - Prints the alphabet.
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
