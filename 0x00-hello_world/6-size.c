#include<stdio.h>
/**
 * main - Where the program starts
 * Return: Should always be 0
 */
int main(void)
{

printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu bytes(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));

return (0);
}
