#include <stdio.h>
#include <stdlib.h>

// return_type function_name ( array_type array_name[size], ...);
// return_type function_name ( array_type array_name[], ...);
// return_type function_name ( array_type* array_name, ...);

void split_name(char name[], int size) {

    int i, j = 0, split_index;
    char first_name[size];
    char last_name[size];
    
    for (i = 0; i < size; i++) {
        if (name[i] == ' ') {
            split_index = i;
            break;
        } else {
            first_name[j] = name[i];
            j++;
        }
    }

    j = split_index + 1;

    for (i = 0; i < size; i++) {
        if (name[i] == '\n') {
            break;
        } else {
            last_name[i] = name[j];
            j++;
        }
    }

    printf("%s %s", last_name, first_name);

}

int main() {

    char name[25];
    int size = sizeof(name);

    printf("Input your fullname (firstname lastname) : ");
    fgets(name, size, stdin);

    split_name(name, size);

    return 0;
}