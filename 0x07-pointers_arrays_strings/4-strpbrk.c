#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int  i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
		
	}
	return (NULL);
}
