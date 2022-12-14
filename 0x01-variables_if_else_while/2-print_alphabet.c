#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
