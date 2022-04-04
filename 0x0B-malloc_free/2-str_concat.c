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
	while (*s1 != '\0')
	{
		s3[n] = *s1;
		s1++;
		n++;
	}
	while (*s2 != '\0')
	{
		s3[n] = *s2;
		s2++;
		n++;
	}

	s3[n] = '\0';
	return (s3);
}
