#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - A function returns the length of a string
 * @s: The string to evaluate
 *
 * Return: The string length
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}

/**
 * *_strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, c;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (c = 0; c < len; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The dog age
 * @owner: The dog owner
 *
 * Return: The pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
