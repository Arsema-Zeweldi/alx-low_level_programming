#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, str;
	unsigned int d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	str = i + n + 1;
	s3 = malloc(str * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	i = d = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (d < n && s2[d] != '\0')
	{
		s3[i] = s2[d];
		i++;
		d++;
	}

	s3[i] = '\0';
	return (s3);
}
