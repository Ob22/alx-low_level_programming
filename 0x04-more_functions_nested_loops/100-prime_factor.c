#include <stdio.h>

/**
* main - prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
		else
			div++;
	}

	printf("%lu\n", num);

	return (0);
}
