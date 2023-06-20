#ifndef DOG
#define DOG
#define DOG_NEW
/**
* struct dog - A new structure definition.
* @name: character name.
* @age: variable of float data type.
* @owner: character variable.
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog new;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
