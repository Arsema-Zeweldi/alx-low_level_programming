#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: int
 * @av: pointer to char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int c, d, n, m;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	m = 0;
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d] != '\0'; d++)
			m++;
		m++;
	}
	m++;

	ptr = malloc(sizeof(char) * m);
	if (ptr == NULL)
		return (NULL);
	n = 0;
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d] != '\0'; d++)
		{
			ptr[n++] = av[c][d];
		}
		ptr[n++] = '\n';
	}
	ptr[n] = '\0';
	return (ptr);
}
