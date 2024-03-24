#include <stdio.h>
#include <string.h>

int main()
{   

    /* strcat */
    printf("========== strcat ==========\n");
    printf("Concatenated Text str2 to str1\n");

    char str1[20] = "Hello, ";
    char str2[] = "World!";

    printf("str1 string: %s\n", str1);
    printf("str2 string: %s\n\n", str2);

    strcat(str1, str2);

    printf("> Concatenated string: %s\n", str1);

    /* strcpy */
    printf("========== strcpy ==========\n");
    printf("Copy Text from Source to Destination\n");

    char src[] = "Hello, World!";
    char dest[20];

    strcpy(dest, src);

    printf("Source string: %s\n\n", src);
    printf("> Destination string: %s", dest);

    return 0;
}
