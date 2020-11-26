#include <stdio.h>
#include <stdlib.h>

void print(const int v[], int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d] = %d\n", i, v[i]);
    }
}

int main() {
    int size = 10;
    int *v = (int*) calloc(size, sizeof(int));


    free(v);

    return 0;
}