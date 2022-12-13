#include "main.h"

/**
 * _isalpha - check fof char alphabet
 * @c: the char to be cheked
 * Return: 1 if the char is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
