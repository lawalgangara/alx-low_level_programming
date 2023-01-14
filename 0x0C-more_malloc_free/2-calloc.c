#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		a[count] = 0;
		count++;
	}
	return (a);
}
