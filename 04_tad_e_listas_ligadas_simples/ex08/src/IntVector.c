// arquivos de source (.c) possuem a implementação das definições

#include "IntVector.h"

struct _int_vector {
    int *data;
    int size;  // tamanho do vetor (número de elementos do vetor de inteiro)
};

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
