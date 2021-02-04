#include <stdio.h>
/**
 * main - print 0-9 and a-f
 * Return: Should always be 0
 */
int main(void)
{
	int x = 48;

	while (x <= 'f')
	{
		if (x <= 57 && (x <= 'a' && x <= 'f'))
			putchar(x);
		x++;
	}
	return (0);
}
