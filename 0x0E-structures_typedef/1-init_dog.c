/**
 * init_dog - initializes dog structure
 *
 * @d: struct to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: always void
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    float age;
    char* owner;
} dog;

void init_dog(dog* d, char* name, float age, char* owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}
