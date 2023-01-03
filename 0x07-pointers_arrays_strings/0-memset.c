#include "main.h"

/**
 *  _memset - function fill the first
 *  @n: bytes of the memory area pointed to by
 *  @s: with the constant byte
 *  @b: memory area pointer
 *  Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
