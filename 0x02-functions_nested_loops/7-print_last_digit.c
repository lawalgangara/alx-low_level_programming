#include "main.h"
/**
 * print_last_digit - print the last digit of a num
 * @n: to print the value
 * Return: always 0
 */
int print_last_digit(int n)
{
	lastdigit = n % 10;
	while (n >= 10)
	{
		n = n / 10;
	}
	firstdigit = n;
	_putchar("first digit = %d and last digit = %d. firstdigit, lastdigit);
		return (0);
}
