#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello World \n");
    printf("This is a simple C program. \n");
     
    int x = 10;
    printf("the value of x is: %d\n",x);
    //added code
    printf("hi"\n);
    
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
