#include "dog.h"
/**
 * init_dog - init a struct of type dog.
 * @d: pointer to a struct. theres pointers to everything apparently
 * @name: struct name element.
 * @age: age element. dogs should live longer
 * @owner: owners name element.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
