#include <stdio.h>
/**
 * main - a program prints the sum of all the mul of 3 or 5 below 1024
 * Return: Void
 */
int main(void)
{
	int n, i = 0;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			i = i + n;
		}
	}
	printf("%d\n", s);
	return (0);
}
