#include <stdio.h>
#include <stdlib.h>

#include "IntVector.h"

int main() {
    IntVector *v = createIntVector(10);
    printf("v->size: %d\n\n", v->size);

    for (int i = 0; i < v->size; i++) {
        v->data[i] = i;
    }

    // printIntVector(v);

    printf("v[4] = %d\n", atIntVector(v, 4));
    printf("v[5] = %d\n", atIntVector(v, 5));
    printf("v[20] = %d\n", atIntVector(v, 20));
    printf("v[0] = %d\n", atIntVector(v, 0));

    return 0;
}
