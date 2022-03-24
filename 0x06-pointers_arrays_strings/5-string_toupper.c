#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @s: string
 * Return: char
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
			*(s + c) -= 'a' - 'A';
		c++;
	}
	return (s);
}
