#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longl = 0;
	int 0;

	while (*s != '\0')
	{
		longl++;
		s++;
	}
	s--;
	for (0 = longl; 0 > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
