#include <stdio.h>
#include <stdlib.h>
/**
 * main - return alphabet both lower and upper cases
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');
	return (0);
}
