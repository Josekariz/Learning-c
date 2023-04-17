#include <stdio.h>
int main(void)
/**
 * main - method to run
 * ./pointer - runs the code
 * complier - gcc -o hello pointer.c
*/
{
    /* Here I am creating an integer called x
    *and assigining it the value of 10.
    */
    int x = 10;

    /* When * is placed after the data type, it means that it is a pointer.
    * the px is a the name of the pointer.
    * the & is the adress (where in the stack memory the value of x is located)
    * In a sentence: px points to the adress of x
    */
    int* px = &x;

    /*
    * when we put the * before the px, we are deferencing the pointer variable ie px.
    * in simple we are telling y to follow the pointer and get the value that the pointer is pointing to.
    * 
    */
    int y = *px;

    // Lets test this out.
    // We use %d to tell the function to expect an integer agument and print it in decimal format.
    printf("The value of x is: %d\n", x);

    // prints the memory address of x
    // we use %d to tell the function to expect an pointer agument and print it in a platform specific way ie usually hexidecimal numbers.
    /*
    * void: it is a keyword that:
    * 1. Indicates that a pointer or a function does not return a value
    * 2. A pointer does not point to a specific type of data
    * 3. A function that takes no arguments.
    * 
    * In the code below
    *  the type of argument expected is a pointer ie %p
    * but printf  does not know what type of pointer that is being passed as an argument
    * So we cast the pointer to a generic pointer using (void *) sicnce there are a couple of pointer types eg. to a pointer, to a function, to data, to a constant etc.
    */
    printf("The value of y is: %p\n", (void *)px);


    // prints "The value of y is: 10"
    printf("The value of y is: %d\n", y); 
}
