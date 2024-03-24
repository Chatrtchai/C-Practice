#include <stdio.h>

union number
{
    int x;
    double y;
};

int main()
{
    union number value;

    value.x = 100;
    printf("=================================\n");
    printf("Put %d in the integer member\n", value.x);
    printf("and print both members.\n");
    printf("=================================\n");

    printf("int:\n%d\n\n", value.x);
    printf("double:\n%lf\n\n", value.y);

    value.y = 100.00;
    printf("=================================\n");
    printf("Put %lf in the floating member\n", value.y);
    printf("and print both members.\n");
    printf("=================================\n");

    printf("int:\n%d\n\n", value.x);
    printf("double:\n%lf", value.y);
}