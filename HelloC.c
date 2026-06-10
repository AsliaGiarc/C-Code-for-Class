#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AI MADE
// Added a typedef for the person struct so the type can be used as Person
// instead of writing struct person every time.
typedef struct person {
    char name[50];
    int age;
} Person;
//END AI MADE

int add(int a, int b);
//required prototype for functions, in this case add. u can find it after main.

int main(void)
{
    printf("Hello World \n");
    printf("This is a simple C program. \n");
     
    int x = 10;
    printf("the value of x is: %d\n",x);

    Person sue;
    strncpy(sue.name, "Sue", sizeof(sue.name) );
    sue.name[sizeof(sue.name) - 1] = '\0'; // Ensure null-termination
    sue.age=20;
    printf("Person: Name: %s, Age: %d\n", sue.name, sue.age);
    
    //AI MADE
    // Allocate space for 20 integers using malloc.
    // sizeof(int) gives the number of bytes needed for one int,
    // so 20 * sizeof(int) allocates enough memory for 20 ints.
    int *array = malloc(20 * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Initialize the allocated array with values 0..19.
    for (int i = 0; i < 20; i++)  {
        array[i] = i;
    }

    // Print the first and last values to demonstrate the allocation.
    printf("First value: %d\n", array[0]);
    printf("Last value: %d\n", array[19]);

    // Free the allocated memory when we're done with it.
    free(array);
    //END AI MADE
    return 0;
}

int add(int a, int b){
    return a + b;
}
