#include <stdio.h>
/**
 * main - Where the program starts
 * Return: Should always return 0
 */

int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
