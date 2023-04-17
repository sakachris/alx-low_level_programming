#include "dog.h"
#include <stdlib.h>

/**
 * length - determines length of string
 * @str: string to determine length
 *
 * Return: size of string
 */

int length(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * _strcpy - copies a string
 * @dest: destination of copied string
 * @src: source of string to copy
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_size;
	int owner_size;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	name_size = length(name) + 1;
	dog->name = malloc(sizeof(*name) * name_size);
	if (!dog->name)
	{
		free(dog->name);
		return (NULL);
	}

	owner_size = length(owner) + 1;
	dog->owner = malloc(sizeof(*owner) * owner_size);
	if (!dog->owner)
	{
		free(dog->owner);
		return (NULL);
	}
	
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
