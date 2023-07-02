#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of a string
 * @s: string to input
 * Return: string length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * *_strcpy - copy string
 * @dest:string  destination
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int buk, a;

	buk = 0;
	while (src[buk] != '\0')
	{
		buk++;
	}
	for (a = 0; a < buk; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog pointer,
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	int buk1, buk2;

	buk1 = _strlen(name);
	buk2 = _strlen(owner);
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = malloc(sizeof(char) * (buk1 + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (buk2 + 1));
	if (mydog->owner == NULL)
	{
		free(mydog);
		free(mydog->name);
		return (NULL);
	}
	_strcpy(mydog->name, name);
	_strcpy(mydog->owner, owner);
	mydog->age = age;
	return (mydog);
}
