#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
