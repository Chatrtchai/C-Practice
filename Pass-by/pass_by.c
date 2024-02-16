#include <stdio.h>

int addOne_value_return(int x) {
    
    return x += 2;

}

int addOne_value(int x) {
    
    x += 2;

}

int addOne_ref(int *x) {
    
    *x += 2;

}

int main() {

    int x;

    printf("Enter x : ");
    scanf("%d", &x);

    printf("Pass by value : ");
    addOne_value(x);
    printf("%d\n", x);

    printf("Pass by value (return) : ");;
    printf("%d\n", addOne_value_return(x));

    printf("Pass by reference (&) : ");
    addOne_ref(&x);
    printf("%d", x);

}