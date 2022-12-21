#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
