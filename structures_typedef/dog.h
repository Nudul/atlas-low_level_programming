#ifndef dog_h
#define dog_h
/**
* struct dog - structure named dog
* @name: character
* @age: float
* @owner: character
*/

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
