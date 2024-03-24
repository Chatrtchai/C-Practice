#include <stdio.h>

struct order {

    unsigned int confirmed : 1;
    unsigned int paid : 1;
    unsigned int shipped : 1;

};

int main() {

    printf("%lu\n", sizeof(struct order));

    struct order my_order;

    my_order.confirmed = 1;
    my_order.paid = 0;
    my_order.shipped = 0;

    if (my_order.confirmed) {
        printf("Your order has been confirmed.\n");
    }

}