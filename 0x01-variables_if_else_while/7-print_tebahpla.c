#include <stdio.h>
/**
 * main - prints z-a with use of putchar
 * Return: should always be 0
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
