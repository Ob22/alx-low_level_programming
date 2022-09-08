#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int b;
	long long int a;
	float f;

	printf("The size of a char: %lu bytes\n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu bytes\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("The size of a long long int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("The size of a float: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
