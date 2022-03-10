#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %i byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %i byte(s)\n", sizeof(ainteger));
	printf("Size of an long int: %i byte(s)\n", sizeof(along));
	printf("Size of a long long int: %i byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %i byte(s)\n", sizeof(afloat));
	
	return (0);
}
