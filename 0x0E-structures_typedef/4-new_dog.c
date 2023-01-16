#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates dog object
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object, NULL if fails
 **/
dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *str)

{
	int len = 0;

	while (*str++)
		len++;
return (len);

}
