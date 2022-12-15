#include "main.h"
/**
 * _isdigit - To print a function that check a digit 0 through 9
 * @c: The return value
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
