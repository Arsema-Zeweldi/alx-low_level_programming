#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int c, d, str3, n = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	c = strlen(s1);
	d = strlen(s2);
	str3 = c + d;
	s3 = malloc(str3 * sizeof(char) + 1);

	if (s3 == 0)
	{
		return (0);
	}
	for (n = 0; n <= str3; n++)
	{
		if (n < c)
			s3[c] = s1[c];
		else
			s3[c] = s2[n - c];
	}

	s3[n] = '\0';
	return (s3);
}
