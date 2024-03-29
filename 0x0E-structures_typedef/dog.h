#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - a struct of type dog.
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* __DOG_H__ */
