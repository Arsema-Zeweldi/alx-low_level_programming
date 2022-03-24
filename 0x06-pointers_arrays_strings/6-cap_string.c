#include "main.h"
/**
 * *cap_string - capitalizes all words
 * @s: string
 * Return: char
 */
char *cap_string(char *s)
{
	int c;

	c = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (c = 0; s[c] != '\0'; c++)
	{
		switch (s[c])
		{
			case 44:
			case 59:
			case 46:
			case 33:
			case 63:
			case 34:
			case 40:
			case 41:
			case 123:
			case 125:
			case 32:
			case '\n':
			case '\t':
				if (s[c + 1] > 96 && s[c + 1] < 123)
				{
					s[c + 1] = s[c + 1] - 32;
				}
		}
	}
	return (s);
}
