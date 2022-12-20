#include <stdio.h>
/**
 * main - a program prints the sum of all the mul of 3 or 5 below 1024
 * Return: Void
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
