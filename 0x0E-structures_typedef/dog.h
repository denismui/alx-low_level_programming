#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: This struct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *ame, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
