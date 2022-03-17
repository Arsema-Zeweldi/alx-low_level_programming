#include <stdio.h>
#include <stdlib.h>
/**
 * main - fizz-buzz test
 * @void: empty
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
		if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (c % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c == 100)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	printf("\n");
	return (0);
}
