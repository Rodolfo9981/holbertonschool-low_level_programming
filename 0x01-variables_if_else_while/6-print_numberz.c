#include <stdio.h>
/**
 * main - prints 0-9 with use of putchar
 * Return: should always be 0
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
