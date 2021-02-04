#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Should always be 0
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
