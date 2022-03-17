#include <stdio.h>
/**
 * main - fizz-buzz test
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz\t");
		}
		else if (c % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else
		{
			printf("%d\t", c);
		}
	}
	printf("\n");
	return 0;
}
