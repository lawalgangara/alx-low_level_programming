#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
}
