#include <stdio.h>

/**
 *  * main - Prints the alphabet.
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 'a';
	int upper = 'A';

	while (upper <= 'Z')
	{
		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
