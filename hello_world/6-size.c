#include <stdio.h>
/**
 * main - entry point
 * 
 * specifies return point
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long));
	printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}
