#include <stdio.h>

int main() {

    // Array
    int myNumbers[4] = {25, 50, 75, 100};

    // Pointer of array
    // syntax : *varialbe = array_variable;
    int i, *pointer = myNumbers;

    // Get first index of array
    printf("*myNumbers : %d\n", *myNumbers); // 25
    printf("*pointer : %d\n\n", *pointer); // 25

    // + 1 first index of array
    // Note : can opertate my other operator
    printf("*myNumbers + 1 : %d\n", *myNumbers + 1); // 26

    // Get second index of array 
    printf("*(myNumbers + 1) : %d\n\n", *(myNumbers + 1));

    printf("Default Array : \n");
    for (i = 0; i < 4; i++) {

        // Can access to each index by pointer
        printf("*(pointer + %d) : %d\n", i, *(pointer + i));

    }

    printf("\nChanged Array : \n");
    for (i = 0; i < 4; i++) {

        // Can change values at index by pointer
        *(pointer + i) /= 5;

        printf("*(pointer + %d) : %d\n", i, *(pointer + i));

    }

    printf("\n(Address) : \n");
    for (i = 0; i < 4; i++) {

        printf("%d : %p\n", *(pointer + i), &myNumbers[i]);

    }
    

    return 0;

}