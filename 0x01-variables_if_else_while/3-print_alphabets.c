#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then uppercase
 * Return: Should always be 0
 */
int main(void)
{
char x = 'a', X = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (X <= 'Z')
{
putchar(X);
X++;
}
putchar('\n');
return (0);
}
