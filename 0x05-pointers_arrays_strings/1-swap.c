#include "main.h"

/**
* swap_int - function that swaps the values of two integers
* @a: first integer
* @b: second integer
* Return: value of integer
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
