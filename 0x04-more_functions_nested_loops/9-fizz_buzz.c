#include <stdio.h>
/**
 * main - checks the code for ALX students.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
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
		else
		{
			printf("%d ", c);
		}
	}
	printf("\n");
	return (0);
}
