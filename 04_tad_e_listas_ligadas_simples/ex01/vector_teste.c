#include <stdio.h>
#include <stdlib.h>

typedef struct _int_vector {
    int *data;
    int size;  // tamanho do vetor (número de elementos do vetor de inteiro)
} IntVector;

// cria um vetor de inteiros com `size` elementos
IntVector* createIntVector(int size) {
    IntVector *v = (IntVector*) calloc(1, sizeof(IntVector));
    v->data = (int*) calloc(size, sizeof(int));
    v->size = size;

    return v;
}


void printIntVector(const IntVector *v) {
    for (int i = 0; i < v->size; i++) {
        printf("[%d] = %d\n", i, v->data[i]);
    }
}


// retorna o elemento do índice [i]
// caso o índice seja inválido, saia do programa (exception)
int atIntVector(const IntVector *v, int i) {
    // se o índice é válido
    if (i >= 0 && i < v->size) {
        return v->data[i];
    }
    // índice inválido
    else {
        printf("ERRO em atIntVector: índice inválido %d not in [0, %d]\n", i, v->size - 1);
        exit(-1); // sai do programa imediatamente
    }
}


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
