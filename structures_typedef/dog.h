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
#endif
#ifndef function_h
#define function_h
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
