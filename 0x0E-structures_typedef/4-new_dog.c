#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, c;
	dog_t *d2;

	d2 = (dog_t *)malloc(sizeof(dog_t));
	if (d2 == NULL)
		return (NULL);
	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	d2->name = malloc(nlen * sizeof(d2->name));
	if (d2->name == NULL)
	{
		free(d2);
		return (NULL);
	}
	for (c = 0; c <= nlen; c++)
		d2->name[c] = name[c];
	d2->age = age;
	d2->owner = malloc(olen * sizeof(d2->owner));
	if (d2->owner == NULL)
	{
		free(d2->name);
		free(d2);
		return (NULL);
	}
	for (c = 0; c <= olen; c++)
		d2->owner[c] = owner[c];
	return (d2);
}
