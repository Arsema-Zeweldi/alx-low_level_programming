#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int d = 612852475143;

	for (c = 2; c <= d; c++)
	{
		if (d % c == 0)
		{
			d = d / c;
			c--;
		}
	}
	printf("%d\n", c);
	return (0);
}
