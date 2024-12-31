#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old\n", *pAge);
}

int main(int argc, char const *argv[])
{
    // pointer
    // a "variable-like" reference that holds a memory address to another variable, array, etc.
    // some tasks are performed more easily with pointers
    // * = indirection operator (value at address)
    // Advantages:
    // - less time in program execution
    // - working on the original variable
    // - able to create data structures (linked list, stack, queue)
    // - return more than one value from functions
    // - search and sort large data easily
    // - dynamic memory allocatiuon
    int age = 21;
    int *pAge = NULL;  // good practice to assign NULL if declaring a pointer
    pAge = &age;

    // printf("age=%d @ %p\n", age, &age);
    // printf("address=%p\npointer=%p\n", &age, pAge);
    // printf("value at age address=%d\n", *pAge); // dereferencing
    
    printAge(pAge);
    return 0;
}
