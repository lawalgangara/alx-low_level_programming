#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: lagest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
