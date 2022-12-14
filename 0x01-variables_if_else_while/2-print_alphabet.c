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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 'a'; n <= 'z'; n++)
		-putchar(n);
	-putchar('\n')
		return (0);
