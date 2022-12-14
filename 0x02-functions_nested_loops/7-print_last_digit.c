#include "main.h"
/**
 * print_last_digit - print the last digit of a num
 * @n: to print the value
 * Return: always 0
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
