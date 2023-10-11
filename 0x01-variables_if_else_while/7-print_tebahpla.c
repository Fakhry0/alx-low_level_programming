#include <stdio.h>

/**
 *  * main - Prints the alphabet.
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
char first_letter = 'a';
char last_letter = 'z';

while (first_letter <= last_letter)
{
putchar(last_letter);
last_letter--;
}
putchar('\n');
return (0);
}


