#include <stdio.h>
#include <stdlib.h>
/**
 * typedef in C is a way to create an alias or shorthand for an existing data type. It allows us to define a new name for a type that already exists in our code. This can make our code easier to read and understand, especially when we are working with complex data types like structures or function pointers.
 *
 * To create a typedef, we use the `typedef` keyword followed by the existing type and the new name we want to give it. For example, we can create a typedef for an integer like this:
 *
 *     typedef int my_int;
 *
 * Now, instead of using `int` in our code, we can use `my_int` instead. This can make our code more readable and easier to maintain, especially if we have a lot of variables of the same type.
 *
 * We can also use typedefs to create aliases for complex data types like structures. For example, if we have a struct called `person` that has several members, we can create a typedef like this:
 *
 *     typedef struct {
 *         char *name;
 *         int age;
 *         char *address;
 *     } person_t;
 *
 * Now, instead of writing `struct person` every time we want to use this data type, we can use `person_t` instead. This can make our code more concise and easier to read, especially if we have a lot of variables of this type.
 *
 * Overall, typedef is a useful feature in C that allows us to create more readable and maintainable code by giving names to our data types that are more meaningful and descriptive.
 */
int main(void)
{
    typedef struct
    {
        char name[100];
        int age;
    } person;
// the name of the above struct is know called person hence the use of an alias
// to initialize the members of the struct
person Jose = {"Joseph Macharia", 18};
//or
person Davi= {.age = 17, .name = "David Salazar"};

// lets print the values that are carried in the structs

printf("Person 1 is called: %s and his age is %d\n", Jose.name, Jose.age);
printf("Person 2 is called: %s and his age is %d\n", Davi.name, Davi.age);

}