#include "main.h"
/**
 * _strlen - return the length of the string.
 * @s: char to check
 * Return: o
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;

	return (a);
}
