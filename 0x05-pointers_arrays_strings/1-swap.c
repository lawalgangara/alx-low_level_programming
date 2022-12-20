#include "main.h"
/**
 * swap_int - To swap the val of 2 int
 * @a: first int
 * @b: Second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
