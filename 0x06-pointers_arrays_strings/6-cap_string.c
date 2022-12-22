#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i, x;
	int cap = 32;

	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\s', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - cap;
		}
		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (s[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (s);
}
