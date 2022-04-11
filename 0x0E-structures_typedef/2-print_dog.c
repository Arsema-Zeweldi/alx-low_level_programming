#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	else
	{
		if (d->name != NULL)
		{
			printf("Name : %s\n", d->name);
		}
		else
		{
			printf("nil");
		}
		printf("Age : %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("nil");
		}
	}
}
