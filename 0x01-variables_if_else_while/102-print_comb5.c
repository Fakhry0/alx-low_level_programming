#include <stdio.h>

/**
 * main - prints all possible different combinations of four digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

while (i <= 99)
{
int j = i + 1;
while (j <= 99)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}

