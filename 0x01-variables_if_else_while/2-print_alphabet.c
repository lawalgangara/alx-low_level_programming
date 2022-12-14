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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
