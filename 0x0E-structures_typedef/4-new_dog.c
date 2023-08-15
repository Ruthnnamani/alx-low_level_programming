#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: of the dog to create
 * @age: of the dog
 * @owner: the owner
 * Return: if success ,NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);
	nd = (dog_t *)malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);
	nd->name = strdup(name);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->age = age;
	nd->owner = strdup(owner);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	return (nd);
}
