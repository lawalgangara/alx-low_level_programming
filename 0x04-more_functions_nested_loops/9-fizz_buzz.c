#include <stdio.h>
/**
 * main - entry point
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 *
 * and FizzBuzz for multiples of both
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			puts("FizzBuzz");
		}
	   	else if (i % 3 == 0)
		{
			 puts("Fizz");
		}
		else if (i % 5 == 0)
		{
			puts("Buzz");
		}
		else
		{
			printf("%u\n", i);
		}
	}
	return (0);
}
