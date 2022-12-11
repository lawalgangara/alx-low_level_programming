#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * main - main function to generate a random number
 * return: always 0 (success)
 */
int main(void)
{
	int n;
	int num;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("the last digit of the %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf(" last digit of %d is %d and is 0\n, n, m")
			if (m < 6 && m != 0)
				printf("last digit of %d is %d and is less than 6 and not 0\n, n, m");
				srand(time(0));
				n = rand() - RAND_MAX / 2;
				printf("last digit of %d is ", n);
				num = n % 10;
				if (num > 5)
				{
					printf("%d and is greater than 5\n", num);
				}
				else if ((num < 6) && (num < 0))
				{
					printf("%d and is less than 6 and not 0\n", num);
				}
				else
				{
					printf("%d and is 0\n", num);
				}
				return (0);
}

