#include "main.h"
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
	i = 0;

	for (unsigned int i = 1; i <= 100; i++)
	{
		 if (i % 15 == 0)
		 {
			 printf("FizzBuzz\n");
		 }
		 else if (i % 3 == 0)
		 {
			 printf("Fizz\n");
		 }
		 else if (i % 5 == 0)
		 {
			  printf("Buzz\n");
		 }
		 else
		 {
			 printf("%u\n", i);
		 }
	 }
		 return (0);
}
