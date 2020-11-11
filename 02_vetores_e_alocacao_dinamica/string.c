#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char string_estatica[10];
    strcpy(string_estatica, "Luke");

    printf("&string_estatica = %p, string_estatica = %p\n", &string_estatica, string_estatica);
    printf("&string_estatica[0] = %p, string_estatica[0] = %c\n", &string_estatica[0], string_estatica[0]);
    printf("&string_estatica[1] = %p, string_estatica[1] = %c\n", &string_estatica[1], string_estatica[1]);
    printf("string_estatica = %s\n\n", string_estatica);

    char* string_dinamica = (char*) calloc(10, sizeof(char));
    strcpy(string_dinamica, "Yoda");

    printf("&string_dinamica = %p, string_dinamica = %p\n", &string_dinamica, string_dinamica);
    printf("&string_dinamica[0] = %p, string_dinamica[0] = %c\n", &string_dinamica[0], string_dinamica[0]);
    printf("&string_dinamica[1] = %p, string_dinamica[1] = %c\n", &string_dinamica[1], string_dinamica[1]);
    printf("string_dinamica = %s\n\n", string_dinamica);
    printf("string_dinamica = %s\n\n", string_dinamica);

    return 0;
}
