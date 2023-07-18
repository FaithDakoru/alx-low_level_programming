#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: personnel
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

void print_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
