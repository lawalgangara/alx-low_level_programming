#include <stdio.h>
/**
 * print_times_table - a function that prints the n times table, starting with 0
 * @n: Integer type number
 */
void print_times_table(int n)
{
	int x = 0, i, j;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			j = x * i;
			if (j > 99)
			{
				_putchar(j / 100 + '0');
				_putchar((j / 10 % 10) + '0');
				_putchar(j % 10 + '0');
			}
			else if (j > 9)
			{
				_putchar(' ');
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else
				_putchar(z + '0');
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}

