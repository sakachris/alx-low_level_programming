#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dogs database
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: List of dogs with their names, age & owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*_DOG_H_ */
