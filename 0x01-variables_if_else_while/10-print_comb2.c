#include <stdio.h>
/**
 * main - prints all numbers from 00 to 99
 * Return: Should always be 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 100)
		{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
			if (x < 99)
				{
				putchar(',');
				putchar(' ');
				}
			x++;
		}
	putchar('\n');
	return (0);
}
